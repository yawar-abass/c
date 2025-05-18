// unix or linux code , does not work windows

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>

#define PORT 8080
#define BUFFER_SIZE 4096

void send_response(int client_socket, const char *path)
{
    char buffer[BUFFER_SIZE];
    FILE *fp = fopen(path, "r");

    if (!fp)
    {
        // File not found - send 404
        const char *not_found =
            "HTTP/1.1 404 Not Found\r\n"
            "Content-Type: text/html\r\n\r\n"
            "<h1>404 Not Found</h1>";
        send(client_socket, not_found, strlen(not_found), 0);
        return;
    }

    // File found - send 200 OK and file content
    const char *header =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n\r\n";
    send(client_socket, header, strlen(header), 0);

    while (fgets(buffer, BUFFER_SIZE, fp) != NULL)
    {
        send(client_socket, buffer, strlen(buffer), 0);
    }

    fclose(fp);
}

int main()
{
    int server_fd, client_socket;
    struct sockaddr_in address;
    char buffer[BUFFER_SIZE] = {0};
    socklen_t addr_len = sizeof(address);

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0)
    {
        perror("Socket failed");
        exit(EXIT_FAILURE);
    }

    // 2. Bind
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        perror("Bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    // 3. Listen
    if (listen(server_fd, 10) < 0)
    {
        perror("Listen failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    printf("HTTP server listening on http://localhost:%d\n", PORT);

    // 4. Accept and handle clients
    while (1)
    {
        client_socket = accept(server_fd, (struct sockaddr *)&address, &addr_len);
        if (client_socket < 0)
        {
            perror("Accept failed");
            continue;
        }

        read(client_socket, buffer, BUFFER_SIZE);

        // Simple parse: only handle GET requests
        char method[8], path[1024];
        sscanf(buffer, "%s %s", method, path);

        printf("Request: %s %s\n", method, path);

        if (strcmp(method, "GET") == 0)
        {
            if (strcmp(path, "/") == 0)
                send_response(client_socket, "index.html");
            else
            {
                // Remove leading slash
                send_response(client_socket, path + 1);
            }
        }

        close(client_socket);
    }

    close(server_fd);
    return 0;
}

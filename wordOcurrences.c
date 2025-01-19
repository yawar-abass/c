#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int countWords(char *sentence, char *word)
{

    int count = 0;
    char *result[10];

    int stnLength = strlen(sentence);
    int index = 0;
    for (int j = 0; j < stnLength; j++)
    {
        if (sentence[j] != ' ')
        {
            result[index][j] = sentence[j];
        }
        else if (sentence[j] == ' ')
        {

            index++;
        }
    }
    printf("%s", result[1]);
    return count;
}

int main()
{

    char *sentence = "Hello there this asdfdsf fa sdf";
    printf("%d", countWords(sentence, "there"));
}
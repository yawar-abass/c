//  Write a program to convert an amount (upto billion 10e9) in figures to equivalent amount in words.

#include <stdio.h>
#include <limits.h>
#include <string.h>

char *threeFigureWord(int figure, char *words);
char *toWords(unsigned long long figure, char *words);

int main()
{
    char words[200] = "";
    unsigned long long int figure = 0;
    printf("Enter a number : ");
    scanf("%lld", &figure);
    printf("%s", toWords(figure, words));
    return 0;
}

char *toWords(unsigned long long figure, char *words)
{
    int billions = figure / 1000000000;
    figure %= 1000000000;
    if (billions)
    {
        threeFigureWord(billions, words);
        strcat(words, " billion");
    }

    int millions = figure / 1000000;
    figure %= 1000000;
    if (millions)
    {
        strcat(words, " ");
        threeFigureWord(millions, words);
        strcat(words, " million");
    }

    int thousands = figure / 1000;
    figure %= 1000;
    if (thousands)
    {
        strcat(words, " ");
        threeFigureWord(thousands, words);
        strcat(words, " thousand");
    }
    if (figure)
    {
        strcat(words, " ");
        threeFigureWord(figure, words);
    }
    return words;
}

char *threeFigureWord(int figure, char *words)
{
    char *units[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *tens[9] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    if (figure / 100)
    {
        strcat(words, units[(figure / 100) - 1]);
        strcat(words, " hundred");
        figure %= 100;
    }

    if (figure / 10)
    {
        strcat(words, " ");
        if (figure / 10 == 1)
        {
            strcat(words, teens[figure % 10]);
            figure = 0;
        }
        else
        {
            strcat(words, tens[(figure / 10) - 1]);
            figure %= 10;
        }
    }

    if (figure)
    {
        strcat(words, " ");
        strcat(words, units[(figure % 10) - 1]);
    }
    return words;
}
/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/9773/
*/

#include <stdio.h>

int main()
{
    int n, i, space;
    scanf("%d", &i);
    n = (i - 1) / 2;
    while (n > 0)
    {
        printf("\n");
        for (space = 0; space < n; space++)
            printf(" ");
        for (space = 0; space < i - n * 2; space++)
            printf("*");
        for (space = 0; space < n; space++)
            printf("  ");
        for (space = 0; space < i - n * 2; space++)
            printf("*");
        n--;
    }
    printf("\n");
    for (space = 0; space < i; space++)
        printf("**");
    n = i - 2;
    while (n > 0)
    {
        printf("\n");
        for (space = 0; space < (i - n) / 2; space++)
            printf(" ");
        for (space = 0; space < n; space++)
            printf("*");
        for (space = 0; space < (i - n) / 2; space++)
            printf("  ");
        for (space = 0; space < n; space++)
            printf("*");
        n = n - 2;
    }
}
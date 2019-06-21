#include <stdio.h>

//https://www.acmicpc.net/problem/2440

int main(void)
{
    int i, j, n;

    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
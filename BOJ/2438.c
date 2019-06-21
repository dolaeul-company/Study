#include <stdio.h>

//https://www.acmicpc.net/problem/2438

int main(void)
{
    int d;
    scanf("%d", &d);
    for(int i = 1; i <= d; i++){
    for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
     printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void next(int n)
{
    if (n < 0)
    {
        printf("Age is not valid, setting age to 0.\n");
    }
    else if (n < 13)
    {
        printf("You are young.\n");
    }
    else if (n >= 13 && n <= 18)
    {
        printf("You are a teenager.\n");
    }
    else
    {
        printf("You are old.\n");
    }
    printf("\n");
}
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("Age is not valid, setting age to 0.\n");
        }
        else if (arr[i] < 13)
        {
            printf("You are young.\n");
            sum = arr[i] + 3;
            next(sum);
        }
        else if (arr[i] >= 13 && arr[i] <= 18)
        {
            printf("You are a teenager.\n");
            sum = arr[i] + 3;
            next(sum);
        }
        else
        {
            printf("You are old.\n");
            sum = arr[i] + 3;
            next(sum);
        }
        sum = 0;
    }

    return 0;
}
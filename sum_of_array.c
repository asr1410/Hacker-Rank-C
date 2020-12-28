#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int read_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int sum_array(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n, total;
    scanf("%d", &n);
    int arr[999];
    read_array(arr, n);
    total = sum_array(arr, n);
    printf("%d", total);
    return 0;
}
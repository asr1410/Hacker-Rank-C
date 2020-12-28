#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*

                         7              7 7 7 7 7 7 7 7 7 7 7            7 
                         7 6              6 6 6 6 6 6 6 6 6            6 7 
                         7 6 5              5 5 5 5 5 5 5            5 6 7 
                         7 6 5 4              4 4 4 4 4            4 5 6 7 
                         7 6 5 4 3              3 3 3            3 4 5 6 7 
                         7 6 5 4 3 2              2            2 3 4 5 6 7 
                        
                                    7 6 5 4 3 2 1 2 3 4 5 6 7 


                        7 6 5 4 3 2               2            2 3 4 5 6 7 
                        7 6 5 4 3               3 3 3            3 4 5 6 7 
                        7 6 5 4               4 4 4 4 4            4 5 6 7 
                        7 6 5               5 5 5 5 5 5 5            5 6 7 
                        7 6               6 6 6 6 6 6 6 6 6            6 7 
                        7               7 7 7 7 7 7 7 7 7 7 7            7 

*/
int main()
{
    int n;
    printf("Enter the no = ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("%d ", j);
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("%d ", i);
        }

        for (int j = i; j < n; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        for (int j = 2 * i - 1; j > 2; j--)
        {
            printf("%d ", i);
        }

        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
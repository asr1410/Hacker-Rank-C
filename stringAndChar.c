#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a, b[20], c[30];
    a = getchar();
    getchar();
    gets(b);
    scanf("%[^\n]%*c", &c);
    putchar(a);
    printf("\n");
    puts(b);
    printf("%s", c);
    return 0;
}
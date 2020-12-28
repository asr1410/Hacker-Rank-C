#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i;
    char a[30];
    scanf("%[^\n]%*c", &a);
    i = strlen(a);
    if (i = 25)
    {
        printf("Hello, World!\n");
        printf("%s", a);
    }
    else
    {
        goto end;
    }
end:

    return 0;
}

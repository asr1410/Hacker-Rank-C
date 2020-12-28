#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct triangle
{
    int a, b, c;
};
typedef struct triangle triangle;
void sort_by_area(triangle *side, int n)
{
    float *area;
    area = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        float s = (float)(side[i].a + side[i].b + side[i].c) / 2;
        double ar = sqrt((double)(s * (s - side[i].a) * (s - side[i].b) * (s - side[i].c)));
        area[i] = ar;
    }
    int j, i;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (area[i] > area[j])
            {
                //HERE THE AREA IS SORTED IN INCREASING ORDER
                float t = area[i];
                area[i] = area[j];
                area[j] = t;

                //HERE THE SIDES OF TRIANGLE IN STRUCT IS ORDERED
                triangle s = side[i];
                side[i] = side[j];
                side[j] = s;
                printf(" %d Inner loop for I %f\n", i, area[i]); //TO CHECK HOW THE LOOP IS WORKING
            }
            printf(" %d Middle loop for I %f\n", i, area[i]); //TO CHECK HOW THE LOOP IS WORKING
        }
        printf(" %d Outer loop for I %f\n", i, area[i]); //TO CHECK HOW THE LOOP IS WORKING
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    triangle *a;
    a = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
    }
    sort_by_area(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", a[i].a, a[i].b, a[i].c);
    }

    return 0;
}
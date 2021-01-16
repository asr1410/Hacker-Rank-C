#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int shelves, queries, option;
    scanf("%d", &shelves);
    scanf("%d", &queries);
    int counter[shelves];
    for (int i = 0; i < shelves; i++)
    {
        counter[i] = 0;
    }
    int library_shelf[shelves][1100];
    for (int i = 0; i < queries; i++)
    {
        int choose_shelf;
        int enter_pages;
        scanf("%d", &option);
        if (option == 1)
        {
            scanf("%d", &choose_shelf);
            scanf("%d", &library_shelf[choose_shelf][counter[choose_shelf]]);
            counter[choose_shelf]++;
        }
        else if (option == 2)
        {
            int choose_shelve, book_number;
            scanf("%d%d", &choose_shelve, &book_number);
            printf("%d\n", library_shelf[choose_shelve][book_number]);
        }
        else if (option == 3)
        {
            int number_of_books;
            scanf("%d", &number_of_books);
            printf("%d\n", counter[number_of_books]);
        }
    }

    return 0;
}
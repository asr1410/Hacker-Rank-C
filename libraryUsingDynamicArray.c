/*
malloc()--> it create a dynamic array and put a garbage value to its all slot members(faster than calloc)
calloc()--> create a dynamic array and put 0 to its alll values(use it to check the condition of putting the value at place zero)
memset(ptr,value to insert, size)--> allocate alll the value to the inserted value in the pointer
*/
#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int *total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int **total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    total_number_of_books = calloc(total_number_of_shelves, sizeof(int));
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    total_number_of_pages = malloc(total_number_of_shelves * sizeof(int *)); //making a array to store address we are using this to store address so it is not necessary to use calloc;
    for (int i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = calloc(1100, sizeof(int)); //creating a array connected to every address of the no of pages
    }

    while (total_number_of_queries--)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {

            int shelf, pages;
            scanf("%d %d", &shelf, &pages);
            total_number_of_books[shelf]++;           //no of book in each shelf increase++
            int *book = total_number_of_pages[shelf]; //allocate the address of each shelf of the 2-D array to book pointer
            while (*book != 0)                        //dereferece the pointer to check were the values is 0;
            {
                book++; //iterating the book address until we get a 0 slot to put the value of pages(pointer arithmetic is used [address + int])
            }
            *book = pages; //putting the value of the no of pages to the data
        }
        else if (type_of_query == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        }
        else
        {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books)
    {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++)
    {
        if (*(total_number_of_pages + i))
        {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages)
    {
        free(total_number_of_pages);
    }

    return 0;
}
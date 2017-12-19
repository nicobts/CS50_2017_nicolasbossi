#include <cs50.h>
#include <stdio.h>

 int main(void)
    {
        int n; //defined in the scope of main so n can be used inside and outside do..

        do //do-while loop that accept only positive integers
            {
                printf("Minutes (Time can't be negative): ");
                n = get_int();

            }
        while (n <= 0);
        printf("Bottles: %i\n", n * 12);

    }
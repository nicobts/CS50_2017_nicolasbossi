#include <stdio.h>
#include <cs50.h>

/****************
 *  Nicolas Bossi 30 Oct 2017 - cs50 - Pset1 - Mario.c
 * a program that prints a pyramid not bigger than 23 rows
 *
 ***************/

int main(void)
{
int height; //height of the pyramid as input

//do-while cycle to accept only values between O and 23
do
  {
    printf("How much high do you want the Marios' pyramid? Type a value: ");
    height = get_int();
  }
while(height < 0 || height > 23);

//for cycle that for each row has 4 parts : spaces,hashes,gap,hashes
for (int row = 1; row < height + 1; row++)
  {
    //for cycle that outputs a decreasing number of spaces in term of the value of the line
    for (int space = height - row; space > 0; space--)
    {
      printf(" ");
    }
    //for cycle that outputs an increasing number of hashes in term of the value of the line
    for (int hash = 1; hash < row + 1; hash++)
    {
      printf("#");
    }
    printf("  "); //two gap part, just two spaces between the two halves of the pyramid
    for (int hash = 1; hash < row + 1; hash++)
    {
      printf("#");
    }
    printf("\n"); //part that creates a new line of the pyramid
  }
}

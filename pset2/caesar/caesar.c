/*****************************************************************
*                                                                +
*   Nicolas Bossi - cs502017 - Pset2 - caesar.c                  *
*                                                                *
*   This program encrypts messages using Caesar’s cipher         *
*    x(i)=(c(i)+ k) % 26                                         *
*    x(i) is the i-th encrypted character                        *
*    c(i) is the i-th character from a given string as input     *
*    k is the secret key, an integer                             *
*                                                                *
*    Usage: ./caesar key                                         *
*                                                                *
*****************************************************************/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //it requires to have only two arguments or it returns an error
    if (argc != 2)
    {
        printf("Usage: ./caesar k,    (where k is an integer >= 0)\n");
        return 1;
    }
    else
    {
        // k is the secret key, an integer , single command line argument, given recalling the program
        // assume that the user type only positive integers.
        int k = atoi(argv[1]);
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++ )
        {
            //if statement for non-capitalized characters, different behaviour on the ASCII table
            //add key to lowercase letters
            if (islower(s[i]))
            {
                printf("%c", (( k + s[i] - 97) % 26) + 97);
            }
            //if statement for capitalized characters, different behaviour on the ASCII table
            //add key to uppercase letters
            else if (isupper(s[i]))
            {
                printf("%c", (( k + s[i] - 65) % 26) + 65);
            }
            //if it's not a character it just prints the character without any ancription
            else
            {
                printf("%c", s[i]);
            }


        }

    }
    //clean exit
    printf("\n");
    return 0;
}



#define _XOPEN_SOURCE

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <crypt.h>
#include <unistd.h>

int main(int argc, string argv[])
{
    //it requires to have only two arguments or it returns an error
    if (argc != 2)
    {
        printf("Usage: ./crack hash,    (where hash is the hash that you want to crack..)\n");
        return 1;
    }
    //salt from encrypted password
    char salt[3];
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];
    //test array to store password
    char test[5] = {};
    //password to crack encrypted password
    char gen_pass[5] = {};

    //store just uppercase and lowercase alphabetic character of the ASCII table in an array
    char arr[52];
    for(int x = 0; x < 26; x++) arr[x] = (char) (x + 65);
    for(int y = 26; y < 52; y++) arr[y] = (char) (y + 71);

    printf("Trying to hack entered hash, please wait...\n");

    // try all possible passwords of length 4 or less

    for(int i = 0; i < 52; i++)
        for(int j = 0; j < 52; j++)
            for(int k = 0; k < 52; k++)
                for(int l = 0; l < 52; l++)
                {
                    gen_pass[0] = arr[i];
                    gen_pass[1] = arr[j];
                    gen_pass[2] = arr[k];
                    gen_pass[3] = arr[l];
                    for(int t = 1, u=1; t < 5 ; t++ , u++)
                    {
                        //create subpasswords: 1,2,3,4 characters
                        strncpy(test, gen_pass, u);
                        test[t] = '\0';
                        // compare the hashed subpasswords with the hash given as an input
                        if(strcmp(crypt(test, salt), argv[1]) == 0)
                        {
                            //if the hashes are the same (== 0) the password has been cracked
                            printf("Password found!\nThe cracked password is: %s\n", test);
                            return 0;
                        }
                    }

                }
}
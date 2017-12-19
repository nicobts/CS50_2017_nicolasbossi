#define _XOPEN_SOURCE

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <crypt.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    // make sure there exist one command argument only
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    char salt[3] = {'5','0'};

    printf("%s\n",crypt(argv[1],salt));
    return 0;

}
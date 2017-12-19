#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //input of the name of the user stored in the variable s
    string s = get_string();
    if (s != NULL) // s can't be an empty string
    {
        if (s[0] != ' ') //this line checks if there are some empty spaces before the name
        {
            //toupper() turns lowecase characters in uppercase charachers..
            //if there aren't empty spaces it prints the first character of the string
            printf("%c", toupper(s[0]));

        }
        for (int i = 0, n = strlen(s); i < n; i++ )
        {
            //this part check if there are spaces inside the string, and if there are it skips them since it founds a character
            if (s[i] == ' ' && s[i + 1] >= 'A' && s[i + 1] <= 'z')
            {
                printf("%c", toupper(s[i + 1]));
            }
        }
    }
    printf("\n");
}


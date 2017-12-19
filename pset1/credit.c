/*****************************************************************
*                                                                +
*   Nicolas Bossi - cs502017 - Pset1 - credit.c                  *
*                                                                *
*   This simple program allows to identifies, with a given input *
*    of a credit card number, if it is a valid Credit Card and   *
*   wether it's an American Exress, Mastercard or Visa.          *
*                                                                *
*****************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //VARIABLES : ccnum : Credit Card NUMber ; EOD : Every Other Digit
    //sum : sum of the every other digits not multiplied by 2 ;
    //x2sum : sum of the every other digits multiplied by 2 ;
    //final sum : final sum = sum + x2sum ,to check the validity of the card

    long long ccnum, eod;
    int sum, x2sum, finalsum;
    do
    {
        printf("Number : ");
        ccnum = get_long_long();


    }
    while (ccnum <= 0);

    //this part sums every other digit from first to last
    for (eod = ccnum, sum = 0; eod > 0; eod /= 100)
    {
        sum += eod % 10;

    }
    //this part sums every other digit from second to last and multiply each digit for 2, then add those products' digits
    for (eod = ccnum / 10, x2sum = 0; eod > 0; eod /= 100)
    {
        if ( (eod % 10) * 2 > 9 )
        {
            x2sum += ((eod % 10) * 2) / 10;
            x2sum += ((eod % 10) * 2) % 10;
        }
        else
        {
            x2sum += (eod % 10) * 2;
        }
    }

    finalsum = x2sum + sum;


    // this if statement identifies if the card is an American Express
    if (ccnum >= 340000000000000 && ccnum < 380000000000000)
    {
        if (finalsum % 10 == 0)
        {
            printf("AMEX\n");
        }

        else
        {
            printf("INVALID\n");
        }
    }


    // this if statement identifies if the card is a Mastercard
    else if (ccnum >= 5100000000000000 && ccnum < 5600000000000000)
    {
        if (finalsum % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    // this if statement identifies if the card is a Visa
    else if (ccnum >= 4000000000000 && ccnum < 5000000000000)
    {
        if (finalsum % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    // this if statement identifies if the card is a Visa
    else if (ccnum >= 4000000000000000 && ccnum < 5000000000000000)
    {
        if (finalsum % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long ccnum , eod;
    int sum, x2sum, finalsum;
    do
    {
        printf("Number : ");
        ccnum = get_long_long();


    }
    while (ccnum <= 0);

    if (ccnum >= 340000000000000 && ccnum < 380000000000000)
    {
        //this part sums every other digit from first to last
        for (eod = ccnum, sum = 0; eod > 0; eod /= 100)
        {
        sum += eod % 10;

        }
        //this part sums every other digit from second to last and multiply each digit for 2, then add those products' digits
        for (eod = ccnum /10, x2sum = 0; eod > 0; eod /= 100)
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

        if (finalsum % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (ccnum >= 5100000000000000 && ccnum < 5600000000000000)
    {
        //this part sums every other digit from first to last
        for (eod = ccnum / 10, sum = 0; eod > 0; eod /= 100)
        {
        sum += eod % 10;

        }

        //this part sums every other digit from second to last and multiply each digit for 2, then add those products' digits
        for (eod = ccnum, x2sum = 0; eod > 0; eod /= 100)
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
        printf ("%i ; %i ; %i", sum , x2sum, finalsum);

        if (finalsum % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (ccnum >= 4000000000000 && ccnum < 5000000000000)
    {
         //this part sums every other digit from first to last
        for (eod = ccnum, sum = 0; eod > 0; eod /= 100)
        {
        sum += eod % 10;

        }

        //this part sums every other digit from second to last and multiply each digit for 2, then add those products' digits
        for (eod = ccnum /10, x2sum = 0; eod > 0; eod /= 100)
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

        if (finalsum % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (ccnum >= 4000000000000000 && ccnum < 5000000000000000)
    {
        //this part sums every other digit from first to last
        for (eod = ccnum / 10, sum = 0; eod > 0; eod /= 100)
        {
        sum += eod % 10;

        }

        //this part sums every other digit from second to last and multiply each digit for 2, then add those products' digits
        for (eod = ccnum, x2sum = 0; eod > 0; eod /= 100)
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

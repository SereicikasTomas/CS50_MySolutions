#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long ccnum;
    long long simpladd;
    long long multip2;
    int addedsum = 0;
    int multsum = 0;
    int sum;

    // ask for CC number
    do
    {
        printf("Write your credit card number, please:\n");
        ccnum = get_long_long();
    }
    while (ccnum < 0);

    // add every digit that will not be multiplied by two
    for (simpladd = ccnum; simpladd > 0; simpladd /= 100)
    {
        addedsum += simpladd % 10;
    }

    // multiply every other digit by 2 and add those products' digits
    for (multip2 = ccnum / 10; multip2 > 0; multip2 /= 100)
    {
        // have to check, if number consists of two digits, need to separate them
        if (2 * (multip2 % 10) > 9)
        {
            multsum += (2 * (multip2 % 10)) / 10;
            multsum += (2 * (multip2 % 10)) % 10;
        }
        else
        {
            multsum += 2 * (multip2 % 10);
        }
    }

    //  add calculated sums into one
    sum = addedsum + multsum;

    // check to see if the number is valid and what type of card it is
    if (sum % 10 == 0)
    {
        if ((ccnum >= 340000000000000 && ccnum < 350000000000000) || (ccnum >= 370000000000000 && ccnum < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (ccnum >= 5100000000000000 && ccnum < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((ccnum >= 4000000000000 && ccnum < 5000000000000) || (ccnum >= 4000000000000000 && ccnum < 5000000000000000))
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

    return 0;
}
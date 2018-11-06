#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variable for change
    float fl;

    // Ask for correct ammount
    do
    {
        fl = get_float("Change owed:");
    }
    while (fl < 0);

    fl = round(fl * 100);

    // Check for coins
    int q = fl / 25;
    fl = fl - (q * 25);
    int d = fl / 10;
    fl = fl - (d * 10);
    int n = fl / 5;
    fl = fl - (n * 5);
    int p = fl / 1;

    printf("%i\n", q + d + n + p);
}
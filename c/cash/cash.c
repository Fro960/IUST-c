#include <stdio.h>

int get_quarters(int cents);
int get_dimes(int cents);
int get_nickels(int cents);
int get_pennies(int cents);

int main(void)
{
    int cents = 70;

    // get total quarters to be given to the customer
    int quarters = get_quarters(cents);

    // subtract quarters from cents
    cents -= quarters * 25;

    // get total dimes to be given to the customer
    int dimes = get_dimes(cents);

    // subtract dimes from the remaining cents
    cents -= dimes * 10;

    // get total nickels to be given to the customer
    int nickels = get_nickels(cents);

    // subtract the nickels from the remaining cents
    cents -= nickels * 5;

    // get total pennies to be given to the customer
    int pennies = get_pennies(cents);

    // subtract the pennies from the remaining cents
    cents -= pennies;

    // total coins to be given to the customer
    int coins = quarters + dimes + nickels + pennies;
    printf("%d\n", coins);
}

int get_quarters(int cents)
{
    // get total quarters to be given to the customer

    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int get_dimes(int cents)
{
    // get total dimes to be given to the customer

    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= dimes;
    }
    return dimes;
}

int get_nickels(int cents)
{
    // get total nickels to be given to the customer

    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= nickels;
    }
    return nickels;
}

int get_pennies(int cents)
{
    // get total pennies to be given to the customer

    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= pennies;
    }
    return pennies;
}

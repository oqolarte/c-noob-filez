/* prints the number of (US) coins, based on "greedy algorithm" */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change, n;

    /* get user input, change owed*/
    do
    {
        printf("Change owed: ");
        scanf("%f", &n);
        change = n;
    }
    while (change < 0);

    /* init of  variables */
    int numOfCoins = 0;
    int cents = round(change * 100);

    /* computing for number of US coins,
    * (0.25, 0.10, 0.05, 0.01)
    */
    while (cents >= 25)
    {
        cents -= 25;
        numOfCoins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        numOfCoins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        numOfCoins++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        numOfCoins++;
    }

    printf("%i\n", numOfCoins);
}

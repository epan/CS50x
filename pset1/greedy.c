#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

float change;
int change_cents;
int remainder;

int quarters;
int dimes;
int nickels;
int pennies;

// Gets change owed
do {
    printf("How much change is owed?\n");
    change = GetFloat();
    change = round(change*100);
    change_cents = change;
}while(change < 0);

quarters = change_cents / 25;
remainder = change_cents % 25;
// printf("Quarters remainder %i.\n", remainder);

dimes = remainder / 10;
remainder = remainder % 10;
// printf("Dimes remainder %i.\n", remainder);

nickels = remainder / 5;
remainder = remainder % 5;
// printf("Nickels remainder %i.\n", remainder);

pennies = remainder;

// printf("You owe %f.\n", change);
// printf("You owe %i cents.\n", change_cents);

// printf("%i Quarters\n", quarters);
// printf("%i Dimes\n", dimes);
// printf("%i Nickels\n", nickels);
// printf("%i Pennies\n", pennies);

printf("%i\n", quarters + dimes + nickels + pennies);

}

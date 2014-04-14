#include <stdio.h>
#include <cs50.h>

int main(void) {

float change;
int change_cents;
int remainder;

int quarters;
int dimes;
// int nickels;
// int pennies;

// Gets change owed
do {
    printf("How much change is owed?\n");
    change = GetFloat();
    change_cents = change * 100;
}while(change < 0);

quarters = change_cents / 25;
remainder = change_cents % 25;
printf("Quarters remainder %i.\n", remainder);

dimes = remainder / 10;
remainder = remainder % 10;
printf("Dimes remainder %i.\n", remainder);

printf("You owe %f.\n", change);
printf("You owe %i cents.\n", change_cents);

printf("%i Quarters\n", quarters);
printf("%i Dimes\n", dimes);

// printf("Quarters remainder %i.\n", remainder);

}

// Get change owed
// Convert to cents
// Divide by 25, that's the number of quarters
// Take remainder
// If greater than 0, divide by 10, that's the number of dimes
// Take remainder
// If greater than 0, divide by 5, that's the number of nikels
// Take remainder
// If greater than 0, that's the number of pennies.

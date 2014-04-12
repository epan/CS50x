#include <stdio.h>
#include <cs50.h>

int main(void) {

float change;

do {
    printf("How much change is owed?\n");
    change = GetFloat();
}while(change < 0);

printf("You owe %f.\n", change);

}

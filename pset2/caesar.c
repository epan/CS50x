#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    int k;
    string input;
    // string output;
    
    if (argc != 2) 
    {
        printf("nope\n");
        return 1;
    } else 
    {
        k = atoi(argv[1]);
        printf("k is %i\n", k);
        input = GetString();
        printf("input is %s\n", input);
       
        for (int i = 0, n = strlen(input); i < n; i++) 
        {
            printf("%c\n", input[i]);
        }
    }
    
}

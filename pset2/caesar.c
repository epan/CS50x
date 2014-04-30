#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    int k;
    string input;
    
    // Ensure only 1 argument is passed in.
    if (argc != 2) 
    {
        printf("nope\n");
        return 1;
    } else 
    {
        // Convert string to int.
        k = atoi(argv[1]);
        printf("k is %i\n", k);
        
        input = GetString();
        printf("input is %s\n", input);
        
        for (int i = 0, n = strlen(input); i < n; i++) 
        {
            int letter = input[i];
            printf("the letter is %c\n", letter);
            
            // Check to see if character is alpha.
            if (isalpha(letter))
            {       
                int result = (letter + k);
                printf("the result is %c\n", result);
            } else
            {
                printf("%c\n", input[i]);
            }
        }
        return 0;
    }
}

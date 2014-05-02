#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{
    int k;
    string input;
    int result;
    
    // Ensure only 1 argument is passed in
    if (argc != 2)
    {
        printf("nope\n");
        return 1;
    } 
    else 
    {
        // Convert string to int
        k = atoi(argv[1]);
        printf("k is %i\n", k);
        
        input = GetString();
        
        // Debug: Confirm the input string
        printf("input is %s\n", input);
        
        for (int i = 0, n = strlen(input); i < n; i++) 
        {
            int letter = input[i];
            
            // Debug: Confirm the letter
            printf("the letter is %c\n", letter);
            
            // Check to see if character is alpha
            if (isalpha(letter))
            {   
                if (isupper(letter)) 
                {
                    if (letter - 65 + k < 25) 
                    {
                        result = (letter + k);
                    }
                    else 
                    {
                        result = ((letter - 65 + k) % 26) + 65;
                    }
                }                  
                else if (islower(letter))
                {
                    if (letter - 97 + k < 25)
                    {
                        result = (letter + k);
                    }
                    else 
                    {
                        result = ((letter - 97 + k) % 26) + 97;
                    }
                }
                
                // Debug: Confirm the encrypted result
                printf("the result is %c\n\n", result);
            } 
            else
            {
                printf("%c\n\n", input[i]);
            }
        }
        return 0;
    }
}

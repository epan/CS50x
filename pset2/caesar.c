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
        
        input = GetString();
        
        for (int i = 0, n = strlen(input); i < n; i++) 
        {
            int letter = input[i];
          
            if (isalpha(letter))
            {   
                if (isupper(letter)) 
                {
                    if (letter - 'A' + k < 25) 
                    {
                        result = (letter + k);
                    }
                    else 
                    {
                        result = ((letter - 'A' + k) % 26) + 'A';
                    }
                }                  
                else if (islower(letter))
                {
                    if (letter - 'a' + k < 25)
                    {
                        result = (letter + k);
                    }
                    else 
                    {
                        result = ((letter - 'a' + k) % 26) + 'a';
                    }
                }
                printf("%c", result);
            } 
            else
            {
                printf("%c", input[i]);
            }
        }
        printf("\n");
        return 0;
    }
}

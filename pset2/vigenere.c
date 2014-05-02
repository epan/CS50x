#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int encipher(int k, int letter);

int main(int argc, string argv[]) 
{
    string ciphertext;
    string plaintext;
    
    if (argc != 2)
    {
        return 1;
    }
    
    string ciphertext = argv[1];
    
    for (int i = 0, n = strlen(ciphertext); i < n; i++)
    {
        if (!isalpha(ciphertext[i]))
        {
            return 1;
        }
    }    
        
    plaintext = GetString();
        
    for (int i = 0, n = strlen(input); i < n; i++) 
    {
        int letter = input[i];
          
        if (isalpha(letter))
        {   
            printf("%c", encipher(k, letter));
        } 
        else
        {
            printf("%c", input[i]);
        }
    }
    printf("\n");
    return 0;
}

int encipher(int k, int letter)
{
    int result = 0;    
    
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
    return result;
}


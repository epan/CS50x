#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int encipher(int k, int letter);

int main(int argc, string argv[]) 
{
    string  ciphertext;
    int     cipherletter;
    int     cipherlength;
    
    string  plaintext;
    int     plainletter;
    
    int k;
    int j = 0;
    
    // Allows only 1 keyword
    if (argc != 2)
    {
        return 1;
    }
    
    ciphertext = argv[1];
    cipherlength = strlen(ciphertext);
    
    // Rejects ciphers with non-alpha content
    for (int i = 0; i < cipherlength; i++)
    {
        if (!isalpha(ciphertext[i]))
        {
            return 1;
        }
    }    
        
    plaintext = GetString();
        
    for (int i = 0, n = strlen(plaintext); i < n; i++) 
    {
        plainletter = plaintext[i];
          
        if (isalpha(plainletter))
        {   
            // Advance cipher letter
            cipherletter = ciphertext[j % cipherlength];
                        
            // Calculate shift (k)
            if (isupper(cipherletter))
            {
                k = cipherletter - 'A';
            }
            else if (islower(cipherletter))
            {
                k = cipherletter -'a';
            }
            
            printf("%c", encipher(k, plainletter));
            j++;
        } 
        else
        {
            printf("%c", plainletter);
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


#include <stdio.h>
#include <cs50.h>

int main(void) {

    int height;
    int i;
    int h;
    int s;
    int spaces;
    int hashes;
    
    do {
        printf("How many rows up to 23 do you want your half pyramid?\n");
        height = GetInt();
    }while (height < 0 || height > 23);
    
//    printf("Height: %i\n", height);
    hashes = 2;
    spaces = height-1;
    
    for(i = 0; i < height; i++) {
        
        for(s = 0; s < spaces; s++) {
            printf(" ");
        }
        
        for(h = 0; h < hashes; h++) {
            printf("#");
        }
        
        spaces--;
        hashes++;
        
        printf("\n");
//        printf("Row %i: %i spaces, %i hashes\n", i, spaces, i+2);        
    } 
    
}

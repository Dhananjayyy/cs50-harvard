// Dhananjay Yelwande
// April 4 2019
// Problem Set 1 : Mario Pyramid

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, k, l;
    
    // Gets the height of the pyramid from user
    // Limits height to the user input
    do
    {
        height = get_int("Enter the height of the pyramid: \n");
    }
    while (height <= 0 || height > 8);
    
    for (i = 0; i < height; i++)
    {
        // Prints spaces
        for (j = 1; j < (height - i); j++)
        {
            printf(" ");
        }
        
        // prints hashes for left triangle
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        
        printf("  ");
        
        // prints hashes of the right triangle
        for (l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        
        printf("\n");
        
    }
    return 0;
}

#include <cs50.h>
#include <stdio.h>

#define MAX_HEIGHT 23

int main(void)
{
    int height;
    
    // gets and validates users input
    
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > MAX_HEIGHT);
    
    // loop through every row of the pyramid, starting at the top
    
    for (int i = 0; i < height; i++)
    {
        
        // loop  through every cell on the given row
        
        for (int j = 0; j <= height; j++)
        {
            /* decides whether to print a space or a hash 
            depending on the current row and cell */
            
            if (j < height - (i + 1))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        
        printf("\n");
    }
}
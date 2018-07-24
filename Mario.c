// this program prints out a double half-pyramid of a user specified height up to 23 hashtags per side

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, row, space, hash, k;

// this do while loop prompts the user for a specified height until the program gets a value between 0 and 23
    do
    {
        i = get_int("Height: ");
    }
    while (i < 0 || i > 23);

    space = i - 1;
    hash = 1;

// the first for loop creates the height specified; the nested for loops therein help output the correct number of hashtags per row
    for (row = 0; row < i; row++)
    {
        for (k = 0 ; k < space; k++)
        {
            printf(" ");
        }

        for (k = 0; k < hash; k++)
        {
            printf("#");
        }

        printf("  ");

        for (k = 0; k < hash; k++)
        {
            printf("#");
        }

        printf("\n");
        space = space - 1;
        hash = hash + 1;

    }
}
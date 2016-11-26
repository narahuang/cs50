#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = GetChar();
    switch(c)
    {
        case 'Y':
        case 'y':
            printf("Yes.\n");
            break;
        case 'N':
        case 'n':
            printf("No!\n");
            break;
        default:
            printf("Error\n");
    }
}

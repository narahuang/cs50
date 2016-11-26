#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x = ");
    int x = GetInt();
    printf("y = ");
    int y = GetInt();

    printf("x / y is: %f\n", (float)x/(float)y );
}


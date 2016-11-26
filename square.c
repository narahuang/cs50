#include <cs50.h>
#include <stdio.h>

int square(int);

int main(void)
{
    printf("Input a number: ");
    int x = GetInt();
    printf("%d^2 is %d\n", x, square(x));
}

int square(int x)
{
    return x * x;
}

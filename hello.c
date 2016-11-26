#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("君の名は? ");
    string name = GetString();
    printf("Hello world! %s\n", name);
}

#include <cs50.h>
#include <stdio.h>

void pchar(int,char);
int getheight(void);

int main(void)
{
    int h = getheight();
    for (int i=0; i<h ; i++)
    {
        pchar(h-i-1,' ');
        pchar(i+1,'#');
        pchar(2,' ');
        pchar(i+1,'#');
        printf("\n");
    }
}

void pchar(int x, char c)
{
    for (int i=0;i<x;i++)
    {
        printf("%c",c);
    }
}

int getheight(void)
{
    int h = 0;
    while(true)
    {
        printf("Height: ");
        h = GetInt();
        if (h > 0 && h < 24)return h;
    }
}

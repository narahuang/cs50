#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int flag = 0;
    string name = GetString();
    for(int i=0, len=strlen(name) ; i<len ; i++)
    {
        if(flag == 1 && name[i] != ' ')
        {
            printf("%c",toupper(name[i]) );
            flag = 0;
        }
        else if(i == 0 && name[i] != ' ')
        {
            printf("%c",toupper(name[i]) );
        }

        if( name[i] == ' ')
        {
            flag = 1;
        }
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // flag to detect space
    int flag = 0;
    string name = GetString();
    // loop through each char in name
    for(int i=0, len=strlen(name) ; i<len ; i++)
    {
        // Found a char after space! toupper it and print, then set flag back to 0
        if(flag == 1 && name[i] != ' ')
        {
            printf("%c",toupper(name[i]) );
            flag = 0;
        }
        // For the case if first char is not space
        else if(i == 0 && name[i] != ' ')
        {
            printf("%c",toupper(name[i]) );
        }
        // If there is a space, set flag as 1
        if( name[i] == ' ')
        {
            flag = 1;
        }
    }
    printf("\n");
}

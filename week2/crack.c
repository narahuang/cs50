// CS50 week2 homework, crack 4-char alphabet password
// argv[1] is the has to crack
// Nara Huang, 2016-11-30

#define _XOPEN_SOURCE
#include <cs50.h>
#include <unistd.h>
#include <stdio.h>
#include <crypt.h>
#include <string.h>
#include <time.h>

int main(int argc, string argv[])
{
    string salt = "50";
    // All alphabets
    string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[5];
    char key1[2];
    char key2[3];
    char key3[4];
    // Check get only one argument, if not, print usage
    if (argc != 2)
    {
        printf("Usage: %s hash\n",argv[0]);
        return 1;
    }
    // For only one char of password
    for (int j1=0 ; j1<52 ; j1++)
    {
        key1[0] = a[j1]; // Cycle through all possible character
                         // And compare with argv[1]
        if (strcmp(argv[1] , crypt(key1,salt) ) == 0)
        {
            printf("%s\n",key1);
            return 0;
        }
    }
    // For 2 char of password
    for (int k1=0 ; k1<52 ; k1++)
    {
        for(int k2=0 ; k2<52 ; k2++)
        {
            key2[0] = a[k1];
            key2[1] = a[k2];
            if (strcmp(argv[1] , crypt(key2,salt) ) == 0)
            {
                printf("%s\n",key2);
                return 0;
            }
        }
    }
    // 3 char of password
    for (int m1=0 ; m1<52 ; m1++)
    {
        for(int m2=0 ; m2<52 ; m2++)
        {
            for(int m3=0 ; m3<52 ; m3++)
            {
                key3[0] = a[m1];
                key3[1] = a[m2];
                key3[2] = a[m3];
                if (strcmp(argv[1] , crypt(key3,salt) ) == 0)
                {
                    printf("%s\n",key3);
                    return 0;
                }
            }
        }
    }
    // And 4 characters of password
    for(int i1=0 ; i1<52 ; i1++)
    {
        for(int i2=0 ; i2<52 ; i2++)
        {
            for(int i3=0 ; i3<52 ; i3++)
            {
                for(int i4=0 ; i4<52 ; i4++)
                {
                    key[0]=a[i1];
                    key[1]=a[i2];
                    key[2]=a[i3];
                    key[3]=a[i4];
                    key[4]='\0';                    
                    if (strcmp(argv[1] , crypt(key,salt) ) == 0)
                    {
                        printf("%s\n",key);
                        return 0;
                    }
                    
                }
            }
        }
    }
}

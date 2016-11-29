// CS50 week2 homework, the vigenere encryption
// argv[1] would be encrypt key,
// then ask user to enter plaintext, and output ciphertext

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check get only one argument 
    if (argc != 2)
    {
        printf("Usage: %s key\n",argv[0]);
        return 1;
    }
    string key = argv[1];
    int keylen = strlen(key);
    // Check every charactor in key is alphabet
    for(int k = 0; k < keylen ; k++)
    {
        if(isalpha(key[k]) == 0)
        {
            printf("Usage: %s key\n",argv[0]);
            return 1;
        }
        else
        {
            key[k] = toupper(key[k]); // make every key char to be upper, for convenient
        }
    }
    // Get plaintext here
    printf("plaintext: ");
    string pt = GetString();
    int keyindex = 0;
    printf("ciphertext: ");
    // Doesn't store ciphertext, just output ciphered char one by one.
    for (int i = 0, n = strlen(pt) ; i < n ; i++)
    {
        if( isalpha( pt[i] ) ) // Only cipher if it's alphabet
        {
            if( isupper( pt[i] ) )
            {
                printf("%c", ((pt[i]-'A' + key[keyindex % keylen] -'A')%26) +65 );
                keyindex++;
            }
            else
            {
                printf("%c", ((pt[i]-'a' + key[keyindex % keylen] -'A')%26) +97 );
                keyindex++;
            }
        }
        else // If it's not alphabet, just output it
        {
            printf("%c",pt[i]);
        }
    }
    printf("\n");
}

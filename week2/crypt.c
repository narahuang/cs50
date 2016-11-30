#define _XOPEN_SOURCE
#include <cs50.h>
#include <unistd.h>
#include <stdio.h>
#include <crypt.h>
#include <string.h>

int main(int argc, string argv[])
{
    string password;
    string pass = argv[1];
    string salt = "50";
    password = crypt(pass,salt);
    printf("The encrypted password is: %s\n", password);
    return 0;
}

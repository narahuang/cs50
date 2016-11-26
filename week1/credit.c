// This program is going to verify credit card numbers, now only for 
// AMEX, MasterCard and VISA.

#include <cs50.h>
#include <stdio.h>

long long getcard(void);

int main(void)
{
    long long card = getcard();
    // Variable init:
    // now: the last digit we are processing
    // digit: count how many digits the card number has.
    // first1: first digit of card numer
    // first2: second digit of card number
    // sum: checksum of card number
    int now, digit=0, first1=0, first2=0, sum=0;
    
    // Processing number from the tail
    while(true)
    {
        digit++;
        now = card % 10;
        if(digit % 2 == 1)
        {
            sum += now;
        }
        else 
        {
            if(now * 2 < 10)
            {
                sum += now*2;
            }
            else
            {
                sum += (now*2)%10;
                sum += ( (now*2) - ( (now*2)%10 ) ) / 10;
            }
        }
        first2 = first1;
        first1 = now;
        card -= now;
        if (card == 0)break;
        card /= 10;
    }
    // Check which type od credit card, or invalid card number.
    if(sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if(digit == 15 && (first1*10 + first2 == 34 || first1*10 + first2 ==37))
    {
        printf("AMEX\n");
    }
    else if(digit == 16 && first1 == 5 && first2 > 0 && first2 < 6)
    {
        printf("MASTERCARD\n");
    }
    else if((digit == 13 || digit == 16) && first1 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

long long getcard(void)
{
    while(true)
    {
        printf("Number: ");
        long long card = GetLongLong();
        if( card > 0 )return card;
    }
}

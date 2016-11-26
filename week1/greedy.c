#include <cs50.h>
#include <stdio.h>
#include <math.h>

float getmoney(void);
int checkchange100(float);

int main(void)
{
	printf("O hai! ");
	float m = getmoney();
    printf("%d\n",checkchange100(m));
}

float getmoney(void)
{
    float money = -1.0;
    while(true)
    {
        printf("How much change is owed?\n");
        money = GetFloat();
        if (money > 0)return money;
    }
}

int checkchange100(float m)
{
    int m100 = (int)(m * 100);
    int quarter = m100 / 25;
    m100 -= quarter * 25;
    int dime = m100 / 10;
    m100 -= dime * 10;
    int nickel = m100 / 5;
    m100 -= nickel * 5;
    return quarter + dime + nickel + m100;
}

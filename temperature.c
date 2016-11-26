#include <cs50.h>
#include <stdio.h>

float ctof(float);
float ftoc(float);

int main(void)
{
    printf("Enter a temperature in Celsius: ");
    float c = GetFloat();
    printf("%f converts to Fahrenheit is %f\n", c, ctof(c));
    printf("Enter a temperature in Fahrenheit: ");
    float f = GetFloat();
    printf("%f converts to Celsius is %f\n", f, ftoc(f));

}

float ctof(float c)
{
    return ( c * ( (float)9 / (float)5 ) )  + 32; 
}

float ftoc(float f)
{
    return (f - (float)32) * ( (float)5/(float)9 );
}

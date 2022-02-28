#include<stdio.h>
 int main()
{
    float celsius,fahrenheit;

    scanf("%f",&fahrenheit);
 
    // Fahrenheit to celsius conversion formula
    celsius=(fahrenheit - 32)*5/9;
    // Print the result
    printf("%.2f",celsius); //.3f means correct to 3 decimal places
}
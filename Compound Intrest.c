#include <stdio.h>
#include <math.h>

int main() 
{
   float p,r,t,amt,ci;
   printf("Enter the principal,rate & time");
    scanf("%f%f%f",&p,&r,&t);
    amt = p*pow((1.0+r/100),t);
    printf("Amount to be paid = %0.2f",amt);
    ci = amt-p;
    printf("\nCompound Interest= %0.2f",ci);
    return 0;
}

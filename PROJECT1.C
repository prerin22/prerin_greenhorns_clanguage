#include<stdio.h>
#include<conio.h>

void main(){
float c;
float f;
clrscr();
printf("enter the value of celcius:");
scanf("%f",&c);

f=(c*9/5)+32;
printf("the answer of fahrenheit: %f",f);

getch();
}
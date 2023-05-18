#include<stdio.h>
#include<conio.h>

void main(){
float a;
float b;
float c;

clrscr();
printf("enter the value of angle a:");
scanf("%f",&a);

printf("enter the value of angle b:");
scanf("%f",&b);
c=180-(a+b);

printf("the answer of angle c: %f",c);
getch();
}
#include<stdio.h>
#include<conio.h>


void main(){
float salary;
float HRA;
float DA;
float TA;
float gross;

clrscr();
printf("enter the salary amount:");
scanf("%f",&salary);

printf("enter the HRA amount:");
scanf("%f",&HRA);

printf("enter the DA amount:");
scanf("%f",&DA);

printf("enter the TA amount:");
scanf("%f",&TA);


gross=salary+(salary*HRA/100)+(salary*DA/100)+(salary+TA/100);
printf("gross salary is: %f",gross);

getch();
}
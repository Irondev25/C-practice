#include<stdio.h>
#include<conio.h>

void main(){
 float rice=17.63,sugar=20.44;
 int qrice,qsugar;
 clrscr();
 printf("***List Of The Item***\nItem\tPrice\nRice\tRs. %f\nSugar\tRs. %f\n",rice,sugar);
 printf("Enter quantity of Rice and Sugar:\n");
 scanf("%d %d",&qrice,&qsugar);
 printf("Price of %d kg rice and %d kg sugar is %f and %f respectively.",qrice,qsugar,(qrice*rice),(qsugar*sugar));
 getch();
}
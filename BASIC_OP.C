#include<stdio.h>
#include<conio.h>


void main(){
  int a,b,choice;
  clrscr();
  printf("Enter Any Two Number: ");
  scanf("%d %d",&a,&b);
  printf("Sum: %d\nSubtraction: %d\nMultiplication: %d\nDivison: %f\nRemainder: %d",(a+b),(a-b),(a*b),((float)a/b),(a%b));
  getch();
}
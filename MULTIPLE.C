#include<stdio.h>
#include<conio.h>

void main(){
 int a,b;
 clrscr();
 printf("Enter any 2 numbers(Enter Smaller one first):\n");
 scanf("%d %d",&a,&b);
 b%a==0?printf("%d is multiple of %d",a,b):printf("%d is not the multiple of %d",a,b);
 getch();
}
/*WAP to print 3 values and do sum, avg, largest of 3 & smallest of 3*/

#include<stdio.h>
#include<conio.h>

void main(){
 int a,b,c;
 clrscr();
 printf("Enter any 3 integers:\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("Their sum is %d\n", a+b+c);
 printf("Their average is %d\n", (a+b+c)/3);
 printf("largest out of them is %d\n",a>b?(a>c?a:c):(b>c?b:c));
 printf("smallest out of them is %d\n", a<b?(a<c?a:c):(b<c?b:c));
 getch();
}
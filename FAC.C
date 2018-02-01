#include<stdio.h>
#include<conio.h>
void main(){
 int n;
 long fac=1;
 clrscr();
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
  fac*=i;
 }
 printf("Factorial:%d",fac);
 getch();
}
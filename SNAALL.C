#include<stdio.h>
#include<conio.h>

void main(){
 int i=1,n,sum=0;
 clrscr();
 printf("Enter the number:\n");
 scanf("%d",&n);
 while(i<=n){
  sum+=i;
  i++;
 }
 printf("Sum:%d\n",sum);
 printf("avg:%f",(float)sum/n);
 getch();
}
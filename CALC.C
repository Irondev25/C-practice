#include<stdio.h>
#include<conio.h>


void main(){
  int a,b,choice;
  clrscr();
  printf("***Calculator***");
  printf("1. Sum\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\nEnter Your Choice: ");
  scanf("%d",choice);
  printf("Enter any two number: ");
  scanf("%d %d",&a,&b);
  switch(choice){
   case 1: printf("Sum: %d",(a+b));
   break;
   case 2: printf("Subtraction: %d",(a-b));
   break;
   case 3: printf("Multilication: %d",(a*b));
   break;
   case 4: printf("Division: %f",((float)a/b));
   break;
   case 5: printf("Remainder: %d",(a%b));
   break;
   default: printf("Wrong Choice!!");
   break;
  };
  getch();
}
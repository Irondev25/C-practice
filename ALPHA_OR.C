#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main(){
 clrscr();
 char c;
 printf("Enter a character: ");
 scanf("%c",&c);
 if(isalpha(c)){
   printf("Character is aplhabet.");
  }
 else if(isdigit(c)){
   printf("Character is Digit.");
  }
 else{
  printf("Entered character is none of the above!!!");
 }
 getch();
}
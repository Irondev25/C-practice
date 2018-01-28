/* wap to read the customer code and calls made show them the bill
   250 Rs for 100 calls and after that 1.25 Rs per call*/

#include<conio.h>
#include<stdio.h>

void main(){
    int csn,noc;
    clrscr();
    printf("Enter your Serial Number and number of calls.\n");
    scanf("%d%d",&csn,&noc);
    printf("Your bill amounts to %.2f INR for %d number of calls..",noc<=100?250:250+(noc-100)*1.25,noc);
    getch();
}
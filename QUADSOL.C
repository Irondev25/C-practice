#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
 float a,b,c,des,x1,x2,img,real;
 clrscr();
 printf("Enter coeff of the quadratic equation:\n");
 scanf("%f%f%f",&a,&b,&c);
 des = pow(b,2)-4*a*c;
 if(des==0){
  printf("Roots are equal:\nx1=x2=%.3f",-b/(2*a));
 }
 else if(des>0){
  x1 = (-b+sqrt(des))/(2*a);
  x2 = (-b-sqrt(des))/(2*a);
  printf("Roots of the eqn are:\n%.3f\n%.3f",x1,x2);
 }
 else{
  real = -b/(2*a);
  img = (sqrt(fabs(des))/2*a);
  printf("Roots the the quadratic equation are:\n%.3f+i%.3f\n%.3f-i%.3f\n",real,img,real,img);
 }
 getch();
}
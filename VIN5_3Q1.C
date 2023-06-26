// Q-1 Write a programe to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("Enter vlaue of A:");
scanf("%d",&a);
printf("Enter vlaue of B:");
scanf("%d",&b);
printf("Enter vlaue of C:");
scanf("%d",&c);
(a<b)?(a<c)?printf("A is Min....")
	   :printf("C is Min....")
     :(b<c)?printf("B is Min....")
	   :printf("C is Min....");
getch();
}
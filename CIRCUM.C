//How to find Circumference of Circle in C Language..

#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	int radius;
	float circumference_of_circle;

	clrscr();

	printf("\nEnter Radius::");
	scanf("%d",&radius);

	circumference_of_circle = 2 * pi * radius;

	printf("\nCircumference of Circle = %f",circumference_of_circle);

	getch();
}
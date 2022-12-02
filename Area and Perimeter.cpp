#include<stdio.h>
#include<conio.h>
main(){
	float length, breadth, radius, RecArea, PerRec,CirArea,Circumference;
	printf("Enter rectangle's length: ");
	scanf("\n%f", & length);
	printf("\nEnter rectangle's breadth: ");
	scanf("\n%f", & breadth);
	
	RecArea= length * breadth;
	PerRec= 2*(length + breadth);
	
	printf("Enter circle's radius: ");
	scanf("%f", & radius);
	
	CirArea = 3.141* radius * radius ;
	Circumference = 2* 3.141 * radius;
	printf("The rectangle's area: %f",RecArea);
	printf("\nThe rectangle's perimeter: %f",PerRec);
	printf("\nThe circle's area: %f",CirArea);
	printf("\nThe circle's circumference: %f",Circumference);
	getch();
}

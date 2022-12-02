#include<stdio.h>
#include<conio.h>
main(){
	float Computer, Maths, Physics,Total,Percentage;
	printf("Enter marks of Computer: ");
	scanf("%f", & Computer);
	
	printf("\nEnter marks of Maths: ");
	scanf("%f", & Maths);
	
	printf("\nEnter marks of Physics: ");
	scanf("%f",& Physics);
	
	Total = Computer + Maths + Physics ;
	Percentage = (Total/ 300) * 100;
	
	printf("\nThe total marks are: %f",Total);
	printf("\nThe percentage is: %f",Percentage);
	
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a, b, c, R1, R2, d;
	printf("Enter values of a,b and c: ");
	scanf("%f%f%f",&a,&b,&c);
	d = (b*b) - (4*a*c);
	
	if(d > '0')
	{
		R1 = -b +sqrt (d) / (2*a);
		R2 = -b - sqrt (d) / (2*a);
		printf("The real roots are = %f %f", R1, R2);
	}
	else if(d = '0')
	{
		R1 = -b/2*a ;
		R2 = -b/2*a ;
		printf("The roots are equal = %f %f", R1, R2);
	}
	else{
		printf("The roots are imaginary.");
	}
	getch();
}

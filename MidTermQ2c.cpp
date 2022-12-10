#include<stdio.h>
#include<conio.h>
main(){
	float E_Units, Bill_Amount, Total;
	
	printf("Enter units of electricity consumed: ");
	scanf("%f", & E_Units);
	
	if(E_Units <= 50)
	{
		Bill_Amount = 7.0 ;
		printf("Your bill amount is Rs.%f",Bill_Amount);
	}
	else if(E_Units > 50 && E_Units <= 100)
	{
		Bill_Amount = 10.0 ;
		printf("Your bill amount is Rs.%f",Bill_Amount);
	}
	else if(E_Units > 100 && E_Units <= 200)
	{
		Bill_Amount = 15.0 ;
		printf("Your bill amount is Rs.%f",Bill_Amount);
	}
	else if(E_Units > 200)
	{
		Bill_Amount = 20.0 ;
		printf("Your bill amount is Rs.%f",Bill_Amount);
	}
	Total = Bill_Amount *(0.02 + 0.01);
	printf("\nYour total electricity bill is %f",Total);
	
	getch();
}

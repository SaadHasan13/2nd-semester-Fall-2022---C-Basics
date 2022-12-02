#include<stdio.h>
#include<conio.h>
main(){
	int num, check;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	check = num%2;
	
	if(num > 0)
	{
		printf("This number is positive.");
	}
	else{
		printf("This number is negative.");
	}
	if(check == 0)
	{
		printf("\nThis number is even.");
	}
	else{
		printf("\nThis number is odd.");
	}
	getch();
}

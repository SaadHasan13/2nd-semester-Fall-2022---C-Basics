#include<stdio.h>
#include<conio.h>
main(){
	int AgeInYears, AgeInDays;
	printf("Enter a person's age in years: ");
	scanf("%d",& AgeInYears);
	
	AgeInDays = AgeInYears * 365;
	printf("The person's age in years: %d",AgeInDays);
	getch();
}

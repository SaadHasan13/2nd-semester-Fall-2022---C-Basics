#include<stdio.h>
#include<conio.h>
main(){
	int SellPrice,Profit,CostPrice;
	printf("Enter selling price of 15 goods: ");
	scanf("\n%d",& SellPrice);
	printf("\nEnter profit earned on 15 goods : ");
	scanf("\n%d", & Profit);
	
	CostPrice= (SellPrice - Profit) / 15;
	printf("Cost price of 1 item : %d",CostPrice);
	getch();
}

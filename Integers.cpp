#include<stdio.h>
#include<conio.h>

main(){
	int num, square, cube;
	printf("Enter number value: ");
	scanf("%d",& num);
	
	square= num * num;
	cube = num * num * num;
	
	printf("\nNumber: %d",num);
	printf("\nSquare: %d", square);
	printf("\nCube: %d", cube);
	getch();
}

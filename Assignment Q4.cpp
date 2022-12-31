#include<stdio.h>
#include<conio.h>
main(){
	
	for(int r=0; r<=6; r++){
		for(int c=0; c<=r; c++){
			printf("%d",c);
		}
		printf("\n");
	}
	for(int r=5; r>=0; r--)
	{
		for(int c=0; c<=r; c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}

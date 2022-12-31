#include<stdio.h>
#include<conio.h>
main(){
	
	for(int r=1; r<=7; r=r+1)
	{
		for(int c=1; c<=7; c=c+1)
		{
			printf("%d\t", r*c);
		}
		printf("\n");
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int num, result = 1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	int C=num;
	
	while(C >=1)
	{
		result = result * C;
		C = C - 1;
	}
	
	printf("%d! = %d", num, result);
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	int x, j, Counter = 0;
	printf("Prime Numbers between 2 to 50 are: \n");
	
	for(x=2; x<=50; x++)
		{
		for(j=2; j<x; j++){
			if(x%j == 0)
			{
				Counter = Counter + 1;
				break;
			}
		}
		if(Counter == 0 && x!=1)
			printf("%d\n", x);
            Counter = 0;	
		}
	getch();
}

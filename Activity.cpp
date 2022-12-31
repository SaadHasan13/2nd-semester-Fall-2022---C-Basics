#include<stdio.h>
#include<conio.h>
main(){
	int Term1, Term2, Result_1, Result_2;
	
	Term1 = 2;
	Term2 = 3;
	
	for(int z=1; z<=100; z++){
		Result_1=Term1 * z;
		Result_2=Term2 * z;
		printf("%d,%d,", Result_1, Result_2);
	}
	
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int Term1=1, Term2=1, Term3;
	printf("%d,%d,", Term1, Term2);
	
	for(int x=3; x<=20; x= x+1)
	{
		Term3 = Term1 + Term2 ;
		printf("%d," ,Term3);
		Term1 = Term2;
		Term2 = Term3; 
	}
	
	getch();
}

#include<stdio.h>
#include<conio.h>
main(){
	int Num, Check;
	printf("Type integer: ");
	scanf("%d", &Num);
	Check = Num%2;
	if(Check == 0){
		printf("Integer is even.");
	}
	else{
		printf("Integer is odd.");
	}
	getch();
}


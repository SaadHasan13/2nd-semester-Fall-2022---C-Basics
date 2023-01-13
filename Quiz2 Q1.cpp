#include<stdio.h>
#include<conio.h>
int AgeCompare(int A1, int A2, int A3);
main(){
	int Person_1, Person_2, Person_3, Youngest;
	printf("Enter ages of three people: \n");
	scanf("%d%d%d",&Person_1,&Person_2,&Person_3);
	
	Youngest = AgeCompare(Person_1,Person_2,Person_3);
	
	getch();
}
int AgeCompare(int A1, int A2, int A3){
	
	if(A1 <= A2 && A1 <= A3)
	{
		printf("Person 1 is the youngest.");
	}
	else if(A2 <= A1 && A2 <= A3)
	{
		printf("Person 2 is the youngest.");
	}
	else if(A3 <= A1 && A3 <= A2)
	{
		printf("Person 3 is the youngest.");
	}
	
}

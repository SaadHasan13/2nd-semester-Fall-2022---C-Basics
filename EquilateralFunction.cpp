#include<stdio.h>
#include<conio.h>
int CheckTriangle (int Ang1, int Ang2, int Ang3);
main(){
	int Angle_1, Angle_2, Angle_3, Sum;
	printf("Enter angles of a 3-sided triangle: ");
	scanf("%d%d%d",&Angle_1,&Angle_2,&Angle_3);
	
	Sum = CheckTriangle(Angle_1, Angle_2, Angle_3);
	
	getch();
}
int CheckTriangle (int Ang1, int Ang2, int Ang3){
	int Total;
	Total = Ang1 + Ang2 + Ang3;
	
	if(Total == 180)
	{
		printf("Hence proved, it is a triangle.");
	}
	else
	{
		printf("Hence proved, it is not a triangle.");
	}
}

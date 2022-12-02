#include<stdio.h>
#include<conio.h>
main(){
	char letter;
	
	printf("Enter a letter: ");
	scanf("%s", &letter);
	
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' )
	{
		printf("The letter entered is a vowel.");
	}
	else
	{
		printf("The letter entered is a consonant.");
	}
	getch();
}

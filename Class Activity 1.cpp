#include<stdio.h>
#include<conio.h>
main(){
	char Phrase;
	int Total_Chars = 0, Total_Words = 1;
	
	printf("Enter a phrase: ");
 //Getche() is a function which is capable of reading one character from any given keyboard and displaying it immediately on the output screen without the character having to wait for the enter key.
	while((Phrase=getche())!= '\r'){  
 		Total_Chars++ ;
		if(Phrase == ' '){
			Total_Words++ ;
		}
	}
	printf("\nTotal words: %d", Total_Words);
	printf("\nTotal characters: %d", Total_Chars);
	getch();
}

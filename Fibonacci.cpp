#include<stdio.h>
#include<conio.h>

int main ()
{

  int first = 0, second = 1, third, i, n;

  printf ("Enter the length of the fibonacci series \n");

  scanf ("%d", &n);

  printf ("The Fibonacci series is :\n");

  printf ("%d %d", first , second); 

  for (i = 2; i <= n; i++)

    {

      third = first + second;

      printf ("%d ", third);

      first = second;

      second = third;

    }

  getch();

}

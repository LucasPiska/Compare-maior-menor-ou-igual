#include <iostream>
#include <stdio.h>



int main() 
{
	
	
int A=0;
int B=0;

printf("Informe um numero inteiro A:\n");

scanf("%i",&A);

printf("Informe um numero inteiro B:\n");

scanf("%i",&B);
printf("\n\n");


if(A>B)
{
	printf ("A e maior que B!\n");
	}
	else 
		{
			if(A<B)
		{
			printf("B e maior que A!\n");
		
	}
		else
{	
		printf("B e = A!\n");	
	}
}
	return 1;
}


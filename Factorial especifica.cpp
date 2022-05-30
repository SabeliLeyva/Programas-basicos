#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	//Datos de entrada
	
	int num;
	int fact = 1;
	//Proceso
	
	printf("El factorial de que numero quieres calcular? ");
	scanf("%d", &num);
	
	if(num <= 10)
	{
		for(; num >= 1; num --)
		{
			fact = fact * num;
			printf(" %d", fact);	
		}
	
	}
		
	return 0;
}
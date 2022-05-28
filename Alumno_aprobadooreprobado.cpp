#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//Datos de entrada
	int calif;
		
	//Proceso
	
	printf("Introduce la calificacion:");
	scanf("%d", &calif);
		
	if(calif >= 70 && calif <= 100)
	{
	printf("Aprobado");	
	}
	else
	{
		printf("Reprobado");
	}

	
	return 0;
}
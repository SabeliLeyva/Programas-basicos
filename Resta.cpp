#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//Datos de entrada
	int num1, num2;
	
	//Datos de salida
	int resta;
	
	//Proceso
	
	printf("Dame un numero:");
	scanf("%d", &num1);
	
	printf("Dame otro numero:");
	scanf("%d", &num2);
	
	//Proceso
	resta = num1 - num2;
		
    //Salida
	printf("La resta es:%d", resta);
	
	return 0;
}
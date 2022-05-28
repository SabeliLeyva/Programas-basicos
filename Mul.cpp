#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//Datos de entrada
	int num1, num2;
	
	//Datos de salida
	int multiplica;
	
	//Proceso
	
	printf("Dame un numero:");
	scanf("%d", &num1);
	
	printf("Dame otro numero:");
	scanf("%d", &num2);
	
	//Proceso
	multiplica = num1 * num2;
		
    //Salida
	printf("La multiplicacion es:%d", multiplica);
	
	return 0;
}
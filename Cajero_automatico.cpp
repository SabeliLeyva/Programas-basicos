#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	//Datos de entrada
	
	int Cantidad;
	int Billetesde;
	int Residuo;
	
	printf("Cuanto dinero quieres? ");
	scanf("%d", &Cantidad);
	
	//Proceso
	
	if(Cantidad >= 500)
	{
		Billetesde = Cantidad / 500;
		Residuo = Cantidad % 500;
		Cantidad = Residuo;
		printf("Billetes de 500: %d", Billetesde);
	}
		
	if(Cantidad >= 200)
	{
		Billetesde = Cantidad / 200;
		Residuo = Residuo % 200;
		Cantidad = Residuo;
		printf("\nBilletes de 200: %d", Billetesde);
	}
	
	if(Cantidad >= 100)
	{
		Billetesde = Cantidad / 100;
		Residuo = Residuo % 100;
		Cantidad = Residuo;
		printf("\nBilletes de 100: %d", Billetesde);
	}
	
	if(Cantidad >= 50)	
	{
		Billetesde = Cantidad / 50;
		Residuo = Residuo % 50;
		Cantidad = Residuo;
		printf("\nBilletes de 50: %d", Billetesde);
	}
	
	if(Cantidad >= 20)
	{
		Billetesde = Cantidad / 20;
		Residuo = Residuo % 20;
		Cantidad = Residuo;
		printf("\nBilletes de 20: %d", Billetesde);
	}
	
	if(Cantidad >= 10)
	{
		Billetesde = Cantidad / 10;
		Residuo = Residuo % 10;
		Cantidad = Residuo;
		printf("\nBilletes de 10: %d", Billetesde);
	}
	
	return 0;
}
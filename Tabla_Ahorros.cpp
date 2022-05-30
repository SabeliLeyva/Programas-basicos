#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	int Monini;
	float Intmen;
	float Total;
	int Plazo;
	int Duracion;
	
	printf("Ingresa un monto mayor de 1000: ");
	scanf("%d", &Monini);
	
	printf("A que plazo lo quieres? 12, 24 o 36 meses: ");
	scanf("%d", &Plazo);
	
	//Si el monto va de 1000 a 10000 el interés es de 3%
	
	if(Monini >= 1000 && Monini <= 10000)
		{
		Intmen = 0.03;				
			for(Duracion = 1; Duracion <= Plazo; Duracion ++)
			{
				Total = Monini * Intmen + Monini;
				Monini = Total;
				
				printf("\nMonto: %d", Monini);
				printf("     Interes:  %.2f", Intmen);
				printf("     Total: %.2f", Total);
			}
		}
				
//Si el monto va de 10001 a 50000 el interés es de 5%

	if(Monini >= 10001 && Monini <= 50000)
		{
		Intmen = 0.05;	
		for(Duracion = 1; Duracion <= Plazo; Duracion ++)
			{
				Total = Monini * Intmen + Monini;
				Monini = Total;
				printf("\nMonto: %d", Monini);
				printf("     Interes: %.2f", Intmen);	
				printf("     Total: %.2f", Total);
			}
		}
			
//Si el monto es mayor de 50001 el interés es de 7%

	if(Monini >= 50001)
		{
		Intmen = 0.03;
		for(Duracion = 1; Duracion <= Plazo; Duracion++)
			{
				Total = Monini * Intmen + Monini;
				Monini = Total;
				printf("\nMonto: %d", Monini);
				printf("     Interes: %.2f", Intmen);
				printf("     Total: %.2f", Total);
			}
		}
		
	
	return 0;
}
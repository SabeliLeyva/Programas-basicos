#include <stdio.h>
#include <stdlib.h>
int main (void)
{
//Datos de entrada
int r, h;
//datos de salida
int Area, Volumen;
	// Proceso
	
	printf("Introduce el radio");
	scanf("%d",&r);
	
	printf("Introduce la altura");
	scanf("%d,&h");
	
	Area = 3.1416 * (r*r);
	Volumen = ((3.1416) * (r * r)) * h;
	
	//Salida
	printf("\nArea del cilindro:%d",Area);
	printf("\nVolumen del cilindro:%d",Volumen);
	
	return 0;
}
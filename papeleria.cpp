#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	
	//Datos de entrada
	
	int opcion;
	int precio;
	int cupon; 
	float valCupon = 0.15;
	float Preciodesc;
	float IVA = 0.16;
	float Total;
	
	//Proceso
	
	printf("\nProducto 1: Plumones ");
	printf("\nProducto 2: Lapices ");
	printf("\nProducto 3: Plumas de colores ");
	printf("\nProducto 4: Gomas ");
	printf("\nProducto 5: Crayolas ");
	
	printf("\nElige un producto: ");
	scanf("%d", &opcion);
	
	printf("\nTienes un cupon? \n1. Si  \n0. No \n");
	scanf("%d", &cupon);
	
	//Menu con los precios
	
	switch(opcion)  
	{
		case 1: 
		precio = 100;
		if(cupon == 1)
		{
			Preciodesc = precio - (precio * valCupon);
			Total = (Preciodesc * IVA) + Preciodesc;
			printf("Precio: %d", precio);
			printf("\nPrecio con descuento: %.2f", Preciodesc);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		else 
		{
			Total = (precio * IVA) + precio;
			printf("\nPrecio: %d", precio);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		break;
		
	    case 2: 
	    precio = 25;
	    if(cupon == 1)
	    {
	        Preciodesc = precio - (precio * valCupon);
		    Total = (Preciodesc * IVA)	+ Preciodesc;
		    printf("\nPrecio: %d", precio);
		    printf("\nPrecio con descuento: %.2f", Preciodesc);
		    printf("\nIVA: %.2f", IVA);
		    printf("\nTotal: %.2f", Total);
		}
		
		else
		{
			Total = (precio * IVA) + precio;
			printf("\nPrecio: %d", precio);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		break;	
		
		case 3:
		precio = 70;
		if(cupon == 1)
		{
			Preciodesc = precio - (precio * valCupon);
			Total = Preciodesc + (Preciodesc * IVA);
			printf("\nPrecio: %d", precio);
			printf("\nPrecio con descuento: %.2f", Preciodesc);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		else
		{
			Total = (precio * IVA) + precio;
			printf("\nPrecio: %d", precio);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		break;
		
		case 4:
		precio = 40;
		
		if(cupon == 1)
		{
			Preciodesc = precio - (precio * valCupon);
			Total = (Preciodesc * IVA) + Preciodesc;
			printf("\nPrecio: %d", precio);
			printf("\nPrecio con descuento: %.2f", Preciodesc);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		else
		{
			Total = (precio * IVA) + precio;
			printf("\nPrecio: %d", precio);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		
		break;
		
		case 5:
		precio = 120;
		
		if(cupon == 1)
		{
			Preciodesc = precio - (precio * valCupon);
			Total = (Preciodesc * IVA) + Preciodesc;
			printf("\nPrecio: %d", precio);
			printf("\nPrecio con descuento: %.2f", Preciodesc);
			printf("\nIVA: %.2f", IVA);
			printf("\nTotal: %.2f", Total);
		}
		
		else
		{
			Total = (precio * IVA) + precio;
		    printf("\nPrecio: %d", precio);
		    printf("\nIVA: %.2f", IVA);
		    printf("\nTotal: %.2f", Total);
		}
		
		break;
		
		default: printf("Esa opcion no existe.");
		{
			
		}
	}
	
	return 0;
}
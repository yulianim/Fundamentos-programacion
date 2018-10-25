#include<stdio.h>
int main(){
	
	float total, descuento, precio;
	printf("Bienvenido al sistema de ventas\n");
	printf("Por favor ingrese el precio de su producto:");
	scanf("%f", &precio);
	if(precio<=2500){
		descuento=precio*0.10;
		total=precio-descuento;
		printf("\n\t\tPrecio: \t$%.2f\n", precio);
		printf("\t\tDescuento: \t$%.2f\n", descuento);
		printf("\t\tTotal: \t\t$%.2f\n", total);
		}
	else{
		descuento=precio*0.30;
		total=precio-descuento;
		printf("\n\t\tPrecio: \t$%.2f\n", precio);
		printf("\t\tDescuento: \t$%.2f\n", descuento);
		printf("\t\tTotal: \t\t$%.2f\n", total);
	}
}

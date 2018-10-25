#include<stdio.h>
int main(){
	int horas, r;
	float sueldo;
    printf("Precio por hora $50.00\n");
	printf("Ingresa el numero de horas trabajadas: ");

	scanf("%d", &horas);
	if(horas<=40){
		sueldo=horas*50;
		printf("\n\t\tHoras trabajadas: \t %d", horas);
		printf("\n\t\tPrecio por hora: \t$50.00");
		printf("\n\t\tSu sueldo es: \t\t$%.2f", sueldo);
	}
	else{
		r=horas-40;
		printf("Horas extras: %d", r);
	}
}

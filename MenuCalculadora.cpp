#include<stdio.h>
int main(){
	int opcion; 
	float r,n1,n2; 
	do{	//inicia el do
	printf("\nMI CALCULADORA \n1.- Sumar\n2.- Restar\n3.- Multiplicar\n4.- Dividir\n Elige una opcion: ");
	scanf("%d", &opcion);
	switch(opcion){//inicia el switch
	case 1: 
		printf("Bienvenido a la funcion sumar\n Por favor ingresa el primer numero: ");
		scanf("%f", &n1);
		printf("Ingresa el segundo numero: ");
		scanf("%f", &n2);
		r=n1+n2;
		printf("La suma es: %f", r);
	break;
	case 2: 
		printf("Bienvenido a la funcion restar\n Por favor ingresa el primer numero: ");
		scanf("%f", &n1);
		printf("Ingresa el segundo numero: ");
		scanf("%f", &n2);
		r=n1-n2;
		printf("La resta es: %f", r);
	break;
	case 3: 
		printf("Bienvenido a la funcion Multiplicar\n Por favor ingresa el primer numero: ");
		scanf("%f", &n1);
		printf("Ingresa el segundo numero: ");
		scanf("%f", &n2);
		r=n1*n2;
		printf("La multiplicacion es: %f", r);
	break;
		case 4: 
		printf("Bienvenido a la funcion Dividir\n Por favor ingresa el primer numero: ");
		scanf("%f", &n1);
		printf("Ingresa el segundo numero: ");
		scanf("%f", &n2);
		 	if(n2>0){
		 		r=n1/n2;
				printf("La division es: %f", r);
			 }
			 else 
			 {
			 	printf("Error no se puede dividir entre cero");
			 }
	break;
	default: printf("Error: opcion invalida!!!");
	}//finaliza el switch
	}//finaliza el do
	while(true);
	
}

#include<stdio.h>
#include<conio.h>

int main(){
      int opcion, saldo=3000, retiro, resultado, deposito;
      do{
      	printf("\nBIENVENIDO AL CAJERO ITTG\n");
      	printf("Que desea hacer?\n");
      	printf("1.-Consultar saldo\n");
      	printf("2.-Retirar\n");
      	printf("3.-Depositar\n");
      	printf("4.-Pagar servicios\n");
      	printf("5.-Transferir\n");
      	printf("6.-Donar\n");
      	printf("7.-Salir\n");
      	printf("Elige una opcion: ");
      	scanf("%d", &opcion);
      	switch(opcion){
      		case 1: printf("Su saldo es: %d\n\n", saldo);
      		break;
      		case 2: printf("Elige el monto del retiro: ");
      				scanf("%d", &retiro);
      				if(retiro<=saldo){
      					saldo=saldo-retiro;
      					printf("Operacion realizada exitosamente!!!\n");
      					printf("Su saldo es: %d\n\n", saldo);
					  }
					else{
						printf("Saldo insuficiente\n\n");
					}
      		break;
      		case 3: printf("Elige el monto a depositar: ");
      				scanf("%d", &deposito);
      				if(deposito>100&&deposito<=8000){
      					saldo=saldo+deposito;
      					printf("Se abonaron %d pesos a su cuenta\n\n", deposito);
					  }
					else{
						printf("Error en el monto!!!\n\n");
					}
      		break;
      		case 4: printf("Opcion 4");
      		break;
      		case 5: printf("Opcion 5"); 
      		break;
      		case 6: printf("Opcion 6");
      		break;
      		case 7: printf("Opcion 7");
      		break;
      		case 8: printf("Opcion 8");
      		break;
      		default: printf("Opcion invalida");
      		
		  }
	  }
	  while(true);
}

#include<stdio.h>
int main(){
	int a[3][3];
	//LLenado del arreglo
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Escribe un numero: ");
			scanf("%d", &a[i][j]);
		}
	}
	//Impresion del arreglo
	for(int i=0; i<3; i++){
		int multi=1; //Variable que almacena la multiplicacion de las columnas
		for(int j=0; j<3; j++){
			printf("\t [%d]", a[i][j]);
			multi=multi*a[i][j];
		}
			printf("= %d\n", multi);	
	}
	return 0;
}

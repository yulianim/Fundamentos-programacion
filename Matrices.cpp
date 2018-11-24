#include<stdio.h>
int main(){
	int A[3][3];
	int Array[3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			printf("Escribe un valor para A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);		
		}
	}
	printf("\n\t Matriz llena \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			printf("\t[%d]", A[i][j]);
		}
		printf("\n");
	}
	//Recorrido y suma de las filas
	int suma;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++){
			suma+=A[i][j];
		}
		Array[i]=suma;
		suma=0;
		printf("=[%d]\n", Array[i]);
		
	}
	
}

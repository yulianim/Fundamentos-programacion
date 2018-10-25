#include<stdio.h>
int main(){
	int i=1, r;
	while(i<=10){
		printf("Tabla del %d\n", i);
		int j=1;
		while(j<=10){
			r=i*j;
			printf("%d x %d = %d\n", i, j, r);
			j++;
		}
		i++;
		printf("\n");  
	}
	
	return 0;
}

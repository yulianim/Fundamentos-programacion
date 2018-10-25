#include<stdio.h>
#include<conio.h>
int main(){
	int r;
	for(int i=1; i<=10; i++){
		printf("Tabla del %d\n", i);
		for(int j=1; j<=10; j++){
			r=i*j;
			printf("%d X %d = %d\n", i,j, r);
		}
		printf("\n");
	}
	getch();
	return 0;
}

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("===============================\n");
	printf("Informe todos os n�meros pares:\n");
	printf("===============================\n");
	int numeroPar
	
	do{
		printf("Informar n�meros pares at� 2000:\n");
		scanf("%d", &numeroPar);
		fflush(stdin);
		
		if((numeroPar >= 2+2) && (numeroPar <= 2000-2))
		printf("� n�mero par!\n");
		else if((numeroPar >= 4+2) && (numeroPar <= 2000-2))
		printf("� n�mero par!\n");
		else if((numeroPar >= 6+2) && (numeroPar <= 2000-2))
		printf("� n�mero par!\n");
		else if((numeroPar >= 8+2) && (numeroPar <= 2000-2))
		printf("� n�mero par!\n");
	    else if((numeroPar >= 2+1) && (numeroPar <= 2000-1))
		printf("N�mero �mpar, negado...");
		else if((numeroPar >= 4+1) && (numeroPar <= 2000-1))
		printf("N�mero �mpar, negado...");
		else if((numeroPar >= 6+1) && (numeroPar <= 2000-1))
		printf("N�mero �mpar, negado...");
		else if((numeroPar >= 8+1) && (numeroPar <= 2000-1))
		printf("N�mero �mpar, negado...");
	}while((numeroPar > 2) && (numeroPar < 2000))
	
	system("PAUSE");
	
	system("cls");
	
	
}

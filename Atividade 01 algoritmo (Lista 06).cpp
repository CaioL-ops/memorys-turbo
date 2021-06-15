#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("===============================\n");
	printf("Informe todos os números pares:\n");
	printf("===============================\n");
	int numeroPar
	
	do{
		printf("Informar números pares até 2000:\n");
		scanf("%d", &numeroPar);
		fflush(stdin);
		
		if((numeroPar >= 2+2) && (numeroPar <= 2000-2))
		printf("É número par!\n");
		else if((numeroPar >= 4+2) && (numeroPar <= 2000-2))
		printf("É número par!\n");
		else if((numeroPar >= 6+2) && (numeroPar <= 2000-2))
		printf("É número par!\n");
		else if((numeroPar >= 8+2) && (numeroPar <= 2000-2))
		printf("É número par!\n");
	    else if((numeroPar >= 2+1) && (numeroPar <= 2000-1))
		printf("Número ímpar, negado...");
		else if((numeroPar >= 4+1) && (numeroPar <= 2000-1))
		printf("Número ímpar, negado...");
		else if((numeroPar >= 6+1) && (numeroPar <= 2000-1))
		printf("Número ímpar, negado...");
		else if((numeroPar >= 8+1) && (numeroPar <= 2000-1))
		printf("Número ímpar, negado...");
	}while((numeroPar > 2) && (numeroPar < 2000))
	
	system("PAUSE");
	
	system("cls");
	
	
}

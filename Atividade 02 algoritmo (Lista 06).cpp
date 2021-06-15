#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador, fatorial;
	
	printf("================================\n");
	printf("Cálculo do fatorial do número 5:\n");
	printf("================================\n");
	printf("Digite um inteiro não negativo:\n");
	scanf("%d", &numero);
	
	fatorial = 1
	contador = 2
	
	while(contador <= numero){
		fatorial = fatorial * contador;
		contador = contador + 1;
	}
	printf("O valor de %d!: %d\n", n, fatorial);
	
	return 0;
}

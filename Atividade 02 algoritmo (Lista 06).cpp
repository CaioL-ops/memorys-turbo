#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, contador, fatorial;
	
	printf("================================\n");
	printf("C�lculo do fatorial do n�mero 5:\n");
	printf("================================\n");
	printf("Digite um inteiro n�o negativo:\n");
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

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, soma;
	
	printf("============================================\n");
	printf("Informando os n primeiros inteiros positivos\n");
	printf("============================================\n");
	printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    soma = 0;
    i = 1;
    
    while (i <= n) {
    soma = soma + i;
    i = i + 1;
  }
  
  printf("A junção dos %d primeiros inteiros positivos e' %d\n", n, soma);
  
  return 0;
}




#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int meses, sexo, masculino, feminino;
	
	printf("===================================================\n");
	printf("Insira a porcentagem de crian�as mortas no per�odo:\n");
	printf("===================================================\n");
	if((masculino == 50) && (feminino == 50))
	printf("Morreram 15%, tanto meninas, quanto meninos...\n");
	
	system("PAUSE");
	
	system("cls");
	
	printf("==============================================================\n");
	printf("Insira a porcentagem de crian�as masculinas mortas no per�odo:\n");
	printf("==============================================================\n");
	if((masculino == 50))
	printf("Morreram 5% das crian�as masculinas...\n");
	
	system("PAUSE");
	
	system("cls");
	
	printf("=========================================================================\n");
	printf("Insira a porcentagem de crian�as que viveram 24 meses ou menos no per�odo\n");
	printf("=========================================================================\n");
	if((masculino == 50) && (feminino == 50))
	printf("Viveram em 24 meses 35% das crian�as...\n");
	else if((masculino != 50) && (feminino != 50))
	printf("Viveram em menos de 24 meses 12% das crian�as...\n");
	
	system("PAUSE");
	
	system("cls");
	
	return 0;
}

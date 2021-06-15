#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, altura_mulher, maior, menor, media_mulher, perc_homem, dif_perc;
	char sexo;
	int mulher, i, homem;
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
    printf ("Digite o sexo (M/F):\n");
    scanf ("%s", sexo);
    
    altura_mulher = 0;
    maior = altura;
    menor = altura;
    mulher = 0
    
    for (i = 1; i <=10; i++){
    	if (altura > maior)
        maior = altura;
        else if (altura < menor)
        menor = altura;
        if (sexo = 'F')
        altura_mulher = altura_mulher + altura;
        mulher = mulher ++;
        if (mulher == 0)
        media_mulher = 0;
        else
        media_mulher = altura_mulher/mulher;
	}
	homem = 5 - mulher;
    perc_homem = 2 * homem;
    dif_perc = 10 - perc_homem;
    printf ("A maior altura do grupo e %5.2f , a menor altura do grupo e %5.2f a media das alturas das mulheres e %5.2f e a diferenca percentual e %5.2f", maior, menor, media_mulher, dif_perc);

    return 0;


}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	
	int primeiraidade, segundaidade;
	
	printf("calculadora do desconto de precos : \n");
	printf("Qual é a sua primeira idade : \n");
	
	scanf("%d", &primeiraidade);
	
	printf("Digite a segunda idade : \n");
	scanf("%d", &segundaidade);
	
	if ( (primeiraidade % 2 == 0 )){
	
	printf("hoje tera desconto para voces \n");
}
	else{
		
	printf("infelismente voces não vão ganha desconto \n");
}
	
    system("pause");
    return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese_brazil");
	int primeiraidade, segundaidade;
	
	printf("calculadora do desconto de precos : \n");
	printf("Qual � a sua primeira idade : \n");
	scanf("%d", &primeiraidade);
	
	printf("Qual � a sua segunda idade : \n");
	scanf("%d", &segundaidade);
	
	if ( (primeiraidade % 2 == 1 ) || (segundaidade % 2 == 1)) {
	printf("hoje tera desconto para voces \n");
	
}
   else{
	
	printf("infelismente voces n�o v�o ganha desconto \n");
}
    
    system("pause");
    return 0;
}
	
	


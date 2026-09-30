#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	float altura, peso, imc;
	
	printf("Digite seu peso em KG: ");
	scanf("%f", &peso);
    
	printf("Digite sua altura em CM: ");
	scanf("%f", &altura);
	
	altura = altura/100;
	imc = peso / (altura*altura);
	
	if(imc < 20){
		printf("Você está abaixo do peso, seu imc é de: %.2f%%", imc);
	}else if(imc >= 20 && imc <=24.9){
		printf("Você está com o peso normal, seu imc é de: %.2f%%", imc);
	}else if(imc >= 25 && imc <= 29.9 ){
		printf("Você está com sobrepeso, seu imc é de: %.2f%%", imc);
	}else if(imc >= 30 && imc <= 39.9){
		printf("Você está obeso, seu imc é de: %.2f%%", imc);
	}else{
		printf("Você está obeso mórbido, seu imc é de: %.2f%%", imc);
	}
	
	return 0;
}
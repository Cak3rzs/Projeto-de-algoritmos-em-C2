#include <stdio.h>
#include <stdlib.h>

	main() {
		float peso, altura, imc;
		printf("\n Digite seu peso:");
		scanf("%f", &peso);
		printf("\n Digite sua altura:");
		scanf("%f", &altura);
		imc = peso/(altura*altura);
			if(imc <= 18.5){
				printf("\n Abaixo do peso ideal");
			}
			if(imc >= 18.5 && imc < 25.0 ){
				printf("\n Peso Normal");
			}
			if(imc >=22.5 && imc < 30.0 ){
				printf("\n Acima do Peso");
			}
				if(imc > 30 ){
					printf("\n Obeso");
			}		

}

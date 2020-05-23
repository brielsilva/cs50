#include <stdio.h>

int main(){
	// Vou receber um numero
	// Vou fazer o modulo e salvar em um array
	// Depois vou pegar esse numero e subtituir pela divisão dele mesmo por 10
	// Vou ficar repetindo até o resultado da divisão da 0
	// o array tera tamanho 16 por ser o tamanho máximo que um numero de cartão tem
	
	int long long n;
	inicio:
	scanf("%lld",&n);
	while(n == 0){
		scanf("%lld",&n);
	}
	int j = 0;
	int cnn[16];
	
	for( j; n !=0; j++){
		cnn[j] = n % 10;
		n = n / 10;
		if(n == 0) break;
		

	}
	printf("%d",j);
	int len = sizeof(cnn)/sizeof(cnn[0]);
	while(j != 12 && j != 14 && j != 15){
		printf("Invalido");
		goto inicio;
	}
	
	//int len = sizeof(cnn)/sizeof(cnn[0]);
	for(int i = 0; i < len; i++){
		printf("%d\n",cnn[i]);
	}
	printf("%d\t\n",len);
	printf("%d\t\n",j);

	// Pega cada valor de cnn
	// Multiplicar por 2
	// Salvar no mesmo array
	int cnn2[len];
	int d = 0;
	for(int a = 1, d; a < j+1 ; a+=2,d++){	
		cnn2[a] = cnn[a] * 2;
		/*if(cnn2[a] >= 10){
			 int aux = cnn2[a] % 10;
			 int l = cnn2[a] / 10;
			 cnn[a] = aux;
			 cnn[a + 1] = l;
		}*/
	}

	// Somar todos os numero em uma variável só
	// Caso o valor de cnn[a] seja um numero de dois digitos, ou seja 10 ou maior
	// Fazer o modulo dele por 10
	// salvar o resultado
	// depois dividir por 10 e salvar o resultado tbm
	int soma = 0;
	int len2 = sizeof(cnn2)/sizeof(cnn2[0]);
	for(int s = 1; s< len2;s+=2){
		printf("%d\n",cnn2[s]);
		 if (cnn2[s] >= 10){
			//continue;
			soma = soma + (cnn2[s] % 10) + (cnn2[s] / 10);
			continue;
		}
		soma = soma + cnn2[s];

		/*if(cnn2[s] < 10){
		 soma = soma + cnn2[s];
	} else{
		soma = soma + (cnn2[s] % 10);
		soma = soma + (cnn2[s] / 10);
	}

	}*/
	}
	
	int res = soma % 10;
	if(cnn[j] == 4){
		printf("VISA\n");
	}
	else if(cnn[j] == 5 && cnn[j -1] == 1 || cnn[j] == 5 && cnn[j - 1] == 2 || cnn[j] == 5 && cnn[j -1] == 3 || cnn[j] == 5 && cnn[j -1] == 4 || cnn[j] == 5 && cnn[j -1] == 5){
		printf("MASTERCARD\n");
	}
	else if(cnn[j] == 3 && cnn[j -1] == 4 || cnn[j] == 3 && cnn[j - 1] == 7){
		printf("ALL AMERICAN EXPRESS\n");
	}else{
		printf("Cartão desconhecido\n");
	}

	if(res == 0){
		printf("Seu cartão é válido\n");
	}
	else{
		printf("Seu cartão não é válido\n");
	}


	
	

	return 0;
}

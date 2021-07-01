#include <stdio.h>


int vet[50];
int i, n, num;


int DecBin(int n){
	if(n < 2){
		return n;
	} else{
		if(n%2 ==0){
			n = n / 2;
			vet[i] = 0;
			return n;
		}
		else{
			n --;
			n /= 2;
			vet[i] = 0;
			return n;
		}
	}
}


main(){
	printf("Digite o numero decimal: ");	
	scanf("%d", &n);
	
	i = 0;


	while (n>=2){
		if(n%2 == 0){
			printf("\n o numero: %d vai ser dividido por dois ", n);
			n = n / 2;
			printf(" = %d", n);
			vet[i] = 0;
			printf("\n Binario[%d] <- %d", i, 0);
		}else{
			printf("\n subitrai 1 por ser impar");
			n --;
			printf("\n o numero: %d vai ser dividido por dois ", n);
			n = n / 2;
			printf(" = %d", n);
			vet[i] = 1;
			printf("\n Binario[%d] <- %d", i, 1);
		}
		i++;	
	}
	
	//i--;
	
	if(n == 1){ 
		//i++;
		vet[i] = 1;
		printf("\n Binario[%d] <- %d de resto final", i, 1);
	}
	if(n == 0){
		//i++;
		vet[i] = 0;
		printf("\n Binario[%d] <- %d de resto final", i, 0);
	}
	
	//i--;
	i++;
	
	//impressao da quantidade de num binarios
	//printf("\n meu i: %d", i);
	
	int bet[i];
	int aux;
	aux = i;
	i--;
	
	for(int j = 0; j < aux; j++){
		//printf("\n Binario: %d", vet[j]);
		printf("\n bet[%d] <- ", i);
		printf("%d", vet[j]);
		bet[i] = vet[j];
		i--;
	}
	
	printf("\n Binario: ");
	for(int k = 0; k < aux; k++){
		printf("%d", bet[k]);
	}
	
}//main()




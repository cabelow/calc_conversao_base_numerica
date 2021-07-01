#include <stdio.h>

main(){
	//variaveis
	int n, i;
	int vet[50];
	int loop = 1;
	
	//processamento
	
	printf("Informe numero: ");
	scanf("%d", &n);
	
	i = 0;
	
	while(loop == 1){
		if(n < 8){
			vet[i] = n;
			loop = 0;
		}
		else{
			vet[i] = n%8;
			n /= 8;
		}
		i++;
	}//while
	
	int bet[i];
	int aux;
	aux = i;
	i--;
	
	for(int j = 0; j < aux; j++){
		//printf("\n Binario: %d", vet[j]);
		//printf("\n bet[%d] <- ", i);
		//printf("%d", vet[j]);
		bet[i] = vet[j];
		i--;
	}
	
	printf("\n Binario: ");
	for(int k = 0; k < aux; k++){
		printf("%d", bet[k]);
	}
	
	
	
}//main

#include <stdio.h>
#include <string.h>
#include <conio.h>



int octalBin(char n[8]){
	
	//variaveis
	int ct =(strlen(n)-1);
	int k=0, i=0;
	char t;
	char bin[ct];
	
	//metodos
	for(i=0; i<=ct; i++){
		t = n[i];
		
		printf("\n %s", t);
		
		//tabela octal
		
		if(t == '0'){bin[i] = '0';}
		if(t == '1'){bin[i] = '001';}
		if(t == '2'){bin[i] = '010';}
		if(t == '3'){bin[i] = '011';}
		if(t == '4'){bin[i] = '100';}
		if(t == '5'){bin[i] = '101';}
		if(t == '6'){bin[i] = '110';}
		if(t == '7'){bin[i] = '111';}
		
	//	k++;
	}
	
	
	for(i=0; i<=ct; i++){
		t = bin[i];
		if(t == 0){printf("000");}//para imprimir 3 zeros
		else{printf("\n %s", bin[i]);}
	}
	
	
	return 0;
}

main(){
	//variaveis
	char num[8];
	
	//input
	printf("Digite um numero octal: ");
	gets(num);
//	fflush(stdin);
	
	//prog
	
	
	//saida
	octalBin(num);
	
	getch();
	
}//main

#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
	//variaveis
	char num[8];
	
	//input
	printf("Digite um numero octal: ");
	gets(num);
	fflush(stdin);
		
	for(int i=0; i<=8; i++){
		printf("%s", num[i]);	
	}
	
	printf("%s", num[2]);	
	
	
	
//	getch();
	
	
	//prog
	
}//main

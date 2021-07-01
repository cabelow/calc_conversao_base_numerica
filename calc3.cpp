#include <stdio.h>
#include <string.h> 
#include <conio.h>

main(){
	char n[8];
	
	printf("Digite um nume octa: ");
	scanf("%s", &n);
	
	for(int i=0; i<=8; i++){
		printf("%s", n[i]);
	}
	
}//main

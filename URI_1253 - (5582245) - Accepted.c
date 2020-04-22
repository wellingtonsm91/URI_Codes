#include <stdio.h>
 
int main() {
	//Entrada de dados
	int N;
	char string[52];			//inclui \0 e \n
	int troca = 0;
	scanf("%d", &N);
	int total = N;
	
	int j;
	
	while (total) {
		
		scanf("%s",string);
		scanf("%d",&troca);
		
		//Processa vetor
		j = 0;
		while(string[j]!='\0'){
			if ((string[j]-troca) < 65){
				string[j] = 90 - (64 -(string[j]-troca));		//90->Z  ; 65->A
			}
			else {
			string[j]-=troca;
			}
			j++;
		}	
		//Imprime string descriptogrado
		printf("%s",string);
	    printf("\n");
		//Zerar vetor
		j= 0;
		while (string[j]!='\0') {
			string[j] = 0;
		}		
		
	total--;
	}
	
	
    return 0;

}
#include <stdio.h>
#include <string.h>

int main() {
	char string[7];
	int digi;
	int i = 0;
	int dec;
	int fat =1;
	int j;
	
	while(string[0]!=48) {						//numero correspodente ao caracter 0 ( zero)
		scanf("%s",string);
		digi = strlen(string);				//Diz onde começa o fatorial
		j = 0;
		dec = 0;
		while (digi>0){
			fat = 1;
			while((digi-i)>1){
				fat = fat*(digi-i);
				i++;
			}
			i = 0;
			
			dec = dec + (string[j]-48)*fat;		//(string-48)-> tranforma pra decimal
			digi--;
			j++;
	
		}
		if (string[0]!=48){
			printf("%d", dec);
			printf("\n");
		}
	}
    return 0;
}
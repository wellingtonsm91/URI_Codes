#include <stdio.h>
 
int main() {
	int N,X,i,j,total;
	char entrada[102];
	total = 0;
	j = 0;
	i= 0;
	
	scanf("%d", &N);
	while(N){
		scanf("%d",&X);
		while(X){
			scanf("%s", entrada);
			while(entrada[i]!='\0'){
				total += (entrada[i] - 65) + j  + i;
				i++;
			}
			j++;
			//Zerar entrada
			i = 0;
			while(entrada[i]!='\0'){
				entrada[i] = 0;
			}
			i = 0;
			X--;
		}
		printf("%d",total);
		printf("\n");	
		total = 0;
		N--;
		i = 0;
		j = 0;
	}
return 0;
}
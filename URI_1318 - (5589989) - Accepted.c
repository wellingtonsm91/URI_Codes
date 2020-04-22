#include <stdio.h>
 
int main() {
 	int N, M, i,j,temp;
	int repetido = 0;
	int count = 0;
	
	N =1;
	M =1;
	
	while((N!= 0) && (M!=0)){
		scanf("%d %d",&N,&M);
		int vet_pack[M];
		//Entrada com os valores dos tickets
		for (i= 0; i<M; i++ ){
			scanf("%d",&vet_pack[i]);
		}

		//ordenação do vetor Insertion Sort
		for(i=1 ;i<M; i++){ 
    	j = i; 
    		while((j != 0) && (vet_pack[j] < vet_pack[j-1])) { 
      				temp = vet_pack[j]; 
      				vet_pack[j] = vet_pack[j - 1]; 
      				vet_pack [j - 1] = temp; 
      				j--;
    		} 
  		}
		//Procurar repetidos
		j=0;
		while(j<M-1){
			if ( vet_pack[j] == vet_pack[j+1]){
				repetido++;
				temp = j;
				while(vet_pack[j] == vet_pack[j+1]){
					count++;
					j++;
				}
				j = temp + count;
				count = 0;
			}
			else {
				j++;	
			}
		}
	if((N!= 0) && (M!=0)){
		printf("%d", repetido);
		repetido = 0;
		printf("\n");
	}
	
	}
 
    return 0;
}
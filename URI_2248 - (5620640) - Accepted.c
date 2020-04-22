#include <stdio.h>

int main(void) {
    // Disable stdout buffering
    //setvbuf(stdout, NULL, _IONBF, 0);
	
	int N,C,M,i;
	int maior = 0;
	int turma = 1;
	//C - código do aluno (1 ≤ C ≤ 20000)
	//M - media (0 ≤ M ≤ 100)
	scanf("%d",&N);
	
  while(N!=0){ 	
	
	int lista[N][2];

	for(i=0;i<N;i++){
		
		scanf("%d %d",&C,&M);
		lista[i][0]= C;
		lista[i][1] =M;
		if (lista[i][1] >maior){
			maior = lista[i][1];
		}
	}

 	//Imprime a lista
 	//for(i=0;i<N;i++){
		//printf("codigo: %d media: %d\n",lista[i][0],lista[i][1]);
	//}
	
	//printf("maior %d \n",maior);
	
	//Ver alunos com a maior;
	printf("Turma %d",turma);
	printf("\n");
	for(i=0;i<N;i++){
		if (lista[i][1] ==maior){

			printf("%d ",lista[i][0]);    //codigo com espaço em branco
		}
	}
	printf("\n");
	printf("\n");
	
	//zerar matriz
	for(i=0;i<N;i++){
		lista[i][0]= 0;
		lista[i][1] =0;
	}
	//zerar as variaveis
	maior = 0;
	
	//mudar a Turma
	turma++;
	
   scanf("%d",&N);	
	
  }//while principal

    return 0;
}
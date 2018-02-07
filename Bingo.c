/*
# URI_Codes - 1136
Exercicios do site URI

Albert, Charles and Mary invented a new version of the classical game Bingo. In traditional Bingo the game is presided over by a non-player known as the caller. In the beginning of the game each player is given a card containing a unique combination of numbers from 0 to N arranged in columns and rows. The caller has a bag containing N+1 balls, numbered from 0 to N. On each turn, the caller randomly selects a ball from the bag, announces the number of the drawn ball to the players, and sets the ball aside so that it cannot be selected again. Each player searches his/her card for the called number and marks it if he/she finds it. The first player who marks a complete pre-announced pattern on the card (for example, a full horizontal line) wins a prize.
In the Albert-Charles-Mary version, on each turn, the caller draws a first ball, returns it to the bag, draws a second ball, returns it to the bag, and then calls out the absolute difference between the two ball numbers. To generate even more excitement, before the game started a possibly empty subset of balls is removed from the bag, in such a way that at least two balls remain there. They would like to know if every number from 0 to N may still be called out with the new drawing method considering the balls that were left in the bag.
Input
Each test case is given using exactly two lines. The first line contains two integers N and B. The meaning of N was described above (1 ≤ N ≤ 90), while B represents the number of balls which remained in the bag (2 ≤ B ≤ N+1). The second line contains B distinct integers bi, indicating the balls which remained in the bag (0 ≤ bi ≤ N).
The last test case is followed by a line containing two zeros.
Output
For each test case, print a single line containing a single uppercase ‘Y’ if it is possible to call out every number from 0 to N, inclusive, or a single uppercase ‘N’ otherwise.

*/



#include "stdio.h"

//funçao que retorna 1 se encontrar todas as diferença absoluta
int diferenca(int *remainp, int Bp, int difp,int faltamp)
{
	int i,j,h;
	for (i=0;i<Bp;i++){
 		for(j=i+1;j<Bp;j++){									//mudar i+1
			if (difp==abs(remainp[i]-remainp[j])){
				return 1;
			}
		}
 	}
	
return 0;
}

int main() {
    // Disable stdout buffering
    //setvbuf(stdout, NULL, _IONBF, 0);
 //Preenchimento remain
 int i,j,N,B,dif;
 int faltam = 0;
 int resposta;
 int menor=0;
 int zero =0;
 int a =0;
 int total =0;
 int missing[100];	
 int remain[100];

for(;;){
	//INICIO:
 	// total e ramanescentes
 	scanf("%d %d",&N,&B);	// total e ramanescentes
	  if ((N==0) && (B==0)){
	 	  break;
	  }

 	for (i=0;i<B;i++){
 		scanf("%d",&remain[i]);
 		//if (remain[i]<N){
 			//menor++;
 		}
 		//if (remain[i]!=0){
 			//zero++;
 		//}
 	//}
 	//if (zero==B){				//se satisfeito, não há diferencas suficientes
 		//printf("N");
 		//printf("\n");
 		//goto INICIO;
 	//}
 	//só entra se tiver zero ou N na sequencia

 	//ver quais valores estão faltando na sequencia dada

	for (i=0;i<=N;i++){						//se considerar 0 muda de 1 pra 0
		for(j=0;j<B;j++){
			if (i != remain[j]){
				a++;
			}
		}
		if (a==(B)){
			missing[faltam] = i;
			faltam++;
		}
		a= 0;
 	}

	//imprimir os que faltam8
	//for(j=0;j<faltam;j++){
		//printf("missing[%d] = %d\n",j,missing[j]);
	//}
	//comparar com as diferencas
	for(i=0;i<faltam;i++){
		dif = missing[i];
		total+=diferenca(remain,B,dif,faltam);
	}

	//reposta final
	if (total>=faltam){
		printf("Y");
		printf("\n");
	}
	else {
		printf("N");
		printf("\n");
	}	
	
	//zerar valores
	faltam = 0;
 	menor=0;
 	zero =0;
 	a = 0;
 	total =0;
 	
}//fim while principal 	

    return 0;
}//função main

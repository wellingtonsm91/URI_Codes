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

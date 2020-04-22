#include <stdio.h>
 
int main() {
 
    double vet[6];
    int positivo = 0;
    
    int i;
    
    for (i=0; i<6;i++) {
    	
    	scanf("%lf", &vet[i]);
    	
    }
    
    for (i=0; i<6;i++) {
    	
    	if (vet[i] > 0) {
    		
    		positivo += 1;
    		
    	}
    	
    }

    printf("%d valores positivos", positivo);
    printf("\n");
 
    return 0;
}
#include <stdio.h>
 
int main() {
 
  int time[3];
    int N, resto, quociente;
    scanf("%d", &N);
    
    //Horas
    quociente = N/3600;
    resto = N%3600;
    time[0] = quociente;
    
    //Minutos
    quociente = resto/60;
    time[1] = quociente;
    
    //Segundos
    resto = resto%60;
    time[2] = resto;
    
    printf("%d:%d:%d", time[0], time[1],time[2]);
    printf("\n");
    
    return 0;
}
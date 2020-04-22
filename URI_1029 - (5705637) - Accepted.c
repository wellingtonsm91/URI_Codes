# include <stdio.h>

int calls;     //Variável global

int fib(int n)
{
	calls++;
    if (n==0) return 0;
    if (n==1) return 1;
    
    return fib(n-1) + fib(n-2);
}

int main(){
    //setvbuf(stdout, NULL, _IONBF, 0);
    int N, X,i,result;
    calls = 0;
    
    scanf("%d",&N);
    
    for (i = 0; i<N; i++) {
        scanf("%d", &X);
        result = fib(X);
        printf("fib(%d) = %d calls = %d", X, calls-1, result);
        printf("\n");
        calls=0;
    }
    
}
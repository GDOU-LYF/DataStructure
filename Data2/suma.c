#include <stdio.h>
#define MAXN 100000
int main(){
    int A,N;
    int S[MAXN],K[MAXN],C,i,j;
    scanf("%d %d",&A,&N);
    if(!N){
        printf("0\n");
        return 0;
    }
    for (i=0;i<N;i++){
        S[i]=0;
        K[i]=A;
    }
    C=0;
    for (i=0;i<N;i++){
        for(j=0;j<=i;j++){
            S[j]+=(K[j]+C);
            C=S[j]/10;
            S[j]%=10;
        }
    }
    if(C){
        printf("%d",C);
    }
    for (i=N-1;i>=0;i--){
        printf("%d",S[i]);
    }
    printf("\n");
    return 0;
}
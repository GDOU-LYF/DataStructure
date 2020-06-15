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
    //这里是要记忆的!
    for (i=0;i<N;i++){
        S[i]=0;
    }
    C=0;
    for (i=0;i<N;i++){
            C+=A*(N-i);
            S[i]=C%10;
            C/=10;
    }
    //这里是要记忆的!
    if(C){
        printf("%d",C);
    }
    for (i=N-1;i>=0;i--){
        printf("%d",S[i]);
    }
    printf("\n");
    return 0;
}
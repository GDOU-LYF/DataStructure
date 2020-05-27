#include <stdio.h>
#define sign '*'
#define N 5
int main(){
    int i,j;
    for (i=1;i<N*2;i+=2){
        for (j=1;j<=i;j++){
            printf("%c",sign);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
void p(int n){
    if(n==1){
        printf("%d\n",n);
    }else{
        p(n-1);
        for(int i=0;i<n;i++){
            printf("%d",n);
        }
        printf("\n");
    }
}
int main(){
    p(5);
    return 0;
}
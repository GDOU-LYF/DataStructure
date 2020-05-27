#include <stdio.h>
#include <math.h>
int isp(int N){
    int ret=1;
    if(N==2||N==3){
        return 1;
    }else{
        int i;
        for (i=2;i<sqrt(N)+1;i++){
            if(N%i==0){
                ret=0;
                break;
            }
        }
    }
    return ret;
}
int main(){
    int i;
    for (i=100;i<=200;i++){
        if(isp(i)){
            printf("%d\t",i);
        }
    }
}
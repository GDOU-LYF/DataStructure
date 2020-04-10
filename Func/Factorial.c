#include <stdio.h>
int Factorial(int N){
    int ret;
    if(N==0){
        ret=1;
    }else{
        ret=N*Factorial(N-1);
    }
    return ret;
}
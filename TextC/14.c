#include <stdio.h>
int f(int a[],int n){
    int i;
    int ret=0;
    for (i=0;i<n;i++){
        ret+=a[i]*a[i];
    }
    return ret;
}
int main(){


    return 0;
}
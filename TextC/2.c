#include <stdio.h>
int fb(int N){
    if(N==0){
        return 0;
    }else if(N>0 && N<=1){
        return 1;
    }else{
        return fb(N-1)+fb(N-2);
    }
    return -1;
}
int fb2(int N){
    int f=1,g=0;
    while(N-->0){
        g+=f;
        f=g-f;
    }
    return g;
}
int main(){
    int ret;
    ret=fb2(1);
    printf("%d",ret);
}
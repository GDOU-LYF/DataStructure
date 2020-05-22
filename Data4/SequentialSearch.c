#include <stdio.h>
#define Max 10
typedef int Position;
Position SequentialSearch(int a[],int K){//顺序查找
    Position i;
    a[0]=K;
    for(int i=Max-1;a[i]!=K;i--){
        return i;
    }
}

int main(){

    return 0;
}

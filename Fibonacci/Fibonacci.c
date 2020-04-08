#include <stdio.h>
int Fibnoacci1(int n){ //时间复杂度 2N; 空间复杂度 N+1
    //int F0=0,F1=1;
    if(n<=2){
        return 1;
    }else{
        return Fibnoacci1(n-1)+Fibnoacci1(n-2);
    }
    return -1;//Erro
}

int Fibnoacci2(int n){//时间复杂度 N,空间复杂度 1
    int f=1,g=0;
    while(0<n--){
        g+=f;
        f=g-f;
    }
    return g;
}
int main(){
    //Fibnoacci1(3);
   //printf("%d",Fibnoacci1(10));
    return 0;
}
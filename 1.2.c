//分析复杂度
#include <stdio.h>
#include <time.h>
clock_t start,stop;
double duration;

#define N1 100
#define N2 1000
#define N3 10000
#define N4 100000

void PrintN2(int N){//输出1~N 递归
    if(N>0){
        PrintN2(N-1);
        printf("%d\n",N);
    }
}
void PrintN1(int N){//输出1~N for
    for(int i=0;i<=N;i++){
        printf("%d\n",i);
    }
}

double run(void (*P)(int),int N,int MAX){
    int i;
    start=clock();
    for(int i=0;i<MAX;i++){
        (*P)(N);
    }
    stop=clock();
    duration=(double)(stop-start)/CLK_TCK;
    printf("second(%d):%fs",N,duration);
    return duration;
}

int main(){
    double a[4],b[4];
    b[0]=run(PrintN1,N1,1);
    b[1]=run(PrintN1,N2,1);
    b[2]=run(PrintN1,N3,1);
    b[3]=run(PrintN1,N4,1);

    a[0]=run(PrintN2,N1,1);
    a[1]=run(PrintN2,N2,1);
    a[2]=run(PrintN2,N3,1);
    a[3]=run(PrintN2,N4,1);
    return 0;
}
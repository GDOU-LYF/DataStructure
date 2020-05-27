#include <stdio.h>
#include <math.h>
#define N 10
int main(){
    int i,j;
    double flag=1.0;
    double ret=0,count=1;
    int x;
    scanf("%d",&x);
    for (i=1;i<=N;i++){
        j=0;
        for (j=2;j<=i;j++){
            count*=j;
        }
        ret+=flag*pow(x,i)/j;
        flag=-flag;
    }
    printf("%f",ret);
}
#include <stdio.h>
#include <math.h>
#define a 10.2
int main(){
    int x;
    scanf("%d",&x);
    double ret;
    while(x!=-100){
        if(x>0){
            ret=3*a*x*x+4*a*x-1;
        }else if(x<=0){
            ret=sqrt(a*a+x*x);
        }else{
            printf("Error!");
            break;
        }
        printf("%f\n",ret);
        scanf("%d",&x);
    }
    return 0;
}
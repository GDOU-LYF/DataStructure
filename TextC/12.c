#include <stdio.h>
int main(){
    int max,x;
    int i;
    for (i=0;i<10;i++){
        scanf("%d",&x);
        if(i==0||x>max){
            max=x;
        }
    }
    printf("%d",max);
    return 0;
}
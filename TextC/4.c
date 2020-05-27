#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int temp;
    while(b>0){
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("最大公约数:%d",a);
    return 0;
}
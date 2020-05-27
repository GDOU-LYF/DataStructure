#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int MA,MB;
    MA=a;
    MB=b;
    int temp;
    while(b>0){
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("最小公倍数:%d",MA/a);
    return 0;
}
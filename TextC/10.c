#include <stdio.h>
int main(){
    int i,p,s;
    i=1;
    p=1;
    s=1;
    for (i=1;i<=10;i++){
        p*=3;
        s+=p;
    }
    printf("%d",s);
    return 0;
}
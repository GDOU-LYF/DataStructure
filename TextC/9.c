#include <stdio.h>
#define MAX 5
int main(){
    double ret=0;
    int i=1;
    while(ret<MAX){
        ret+=1.0/i;
        i++;
    }
    printf("%d",i-1);

    return 0;    
}

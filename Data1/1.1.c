#include <stdio.h>
int main(){
    int n,a;
    int thissum,maxsum;
    scanf("%d",&n);
    thissum=maxsum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        thissum+=a;
        if(thissum<0){
            thissum=0;
        }else if(thissum>maxsum){
            maxsum=thissum;
        }
    }
    printf("%d",maxsum);
}
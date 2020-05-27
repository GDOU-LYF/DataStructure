#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    int n;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    int i;
    for (i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n/2;i++){
        int temp=p[i];
        p[i]=p[(n-1)-i];
        p[n-1-i]=temp;
    }
    for (i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    return 0;
}
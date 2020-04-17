#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;//n<=100,m>=0
    int *p=(int*)calloc(n+m,sizeof(int));
    //int *q=p;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<m;i++){
        *(p+n+i)=*(p+i);
    }
    p=p+m;
    printf("%d",*p++);
    for(int i=0;i<n-1;i++){
        printf(" %d",*(p+i));
    }
    //printf("\n address-:%d",p-q);
    free(p-(n-m-1));
    return 0;
}
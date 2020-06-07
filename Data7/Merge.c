#include <stdio.h>
#include <stdlib.h>
void Merge(int a[],int tempA[],int L,int R,int RightEnd){
    int LeftEnd,Num,temp;
    int i;
    LeftEnd=R-1;
    temp=L;
    Num=RightEnd-L+1;
    while(L<=LeftEnd&&R<=RightEnd){
        if(a[L]<=a[R]){//右边大,左边小,先排小的
            tempA[temp++]=a[L++];
        }else{//反之,排右边的
            tempA[temp++]=a[R++];
        }
    }
    while(L<=LeftEnd){
        tempA[temp++]=a[L++];//将剩下的内容复制到数组里
    }
    while(R<=RightEnd){
        tempA[temp++]=a[R++];
    }
    for(i=0;i<Num;i++,RightEnd--){
        a[RightEnd]=tempA[RightEnd];//复制回去
    }
}

void MSort (int a[],int tempA[],int L,int RightEnd){
    int Center;
    if(L<RightEnd){
        Center=(L+RightEnd)/2;
        MSort(a,tempA,L,Center);
        MSort(a,tempA,Center+1,RightEnd);
        Merge(a,tempA,L,Center+1,RightEnd);
    }
}

void MergeSort(int a[],int n){//归并排序
    int *tempa;
    tempa=(int *)malloc(n*sizeof(int));
    if(tempa!=NULL){
        MSort(a,tempa,0,n-1);
        free(tempa);
    }else{
        printf("空间不足!");
    }
}

int main(){
    int a[]={44,12,59,36,62,43,94,7,35,52,85};
    MergeSort(a,sizeof(a)/sizeof(int));//归并排序
    for (int i=0;i<sizeof(a)/sizeof(int);i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
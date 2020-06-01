#include <stdio.h>
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
        tempA[temp++]=a[L++];
    }
    while(R<=RightEnd){
        tempA[temp++]=a[R++];
    }


}


int main(){
    return 0;
}
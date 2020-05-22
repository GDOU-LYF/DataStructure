#include <stdio.h>
#define Max 10
#define NotFound 0
typedef int Position;
Position SequentialSearch(int a[],int K){//二分查找
    Position left,right,mid;
    left=1;
    right=Max-1;
    while(left<=right){
        mid=(left+right)/2;
        if(K<a[mid]){
            right=mid-1;
        }else if(K>a[mid]){
            left=mid+1;
        }else{
            return mid;
        }
    }
    retrn NotFound;
}

int main(){

    return 0;
}

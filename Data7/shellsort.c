#include <stdio.h>
void shellsort(int a[],int n){
    int Si,D,i,j;
    int temp;
    int Sedgewick[]={929,505,209,105,41,19,5,1,0};

    for (Si=0;Sedgewick[Si]>=n;Si++){//先将Sed缩小到n的最大的最小范围
        ;
    }

    for (D=Sedgewick[Si];D>0;D=Sedgewick[++Si]){

        for (i=D;i<n;i++){
            temp=a[i];
            for (j=i;j>0&&a[j-D]>temp;j-=D){
                a[j]=a[j-D];
            }
            a[j]=temp;
        }
    }

}


int main(){
    return 0;
}
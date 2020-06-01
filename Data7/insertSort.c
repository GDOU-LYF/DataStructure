#include <stdio.h>
void insertSort(int a[],int n){
    int i,j;
    int temp;

    for (i=1;i<n;i++){
        temp=a[i];
        for (j=i;j>0&&a[j-1]>temp;j--){
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
}
int main(){
    int a[]={44,12,59,36,62,43,94,7,35,52,85};
    insertSort(a,sizeof(a)/4);
    for (int i=0;i<sizeof(a)/4;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
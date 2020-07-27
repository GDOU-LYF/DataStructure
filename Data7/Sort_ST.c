#include <stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void InsertionSort(int a[],int N){//插入排序
    int p,i;
    int tmp;
    for (p=1;p<N;p++){
        tmp=a[p];
        for (i=p;i>0&&a[i-1]>tmp;i--){//移动位置,从后面移到小于tmp的位置,为了tmp(p位置的数字移动)插入做准备
            a[i]=a[i-1];
        }
        a[i]=tmp;
    }
}

void sort(int a[],int n){//冒泡排序
    int flag=0;
    for(int i=n-1;i>=0;i--){
        for (int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    
}


int Median3(int a[],int left,int right){
    int Center=(left+right)/2;
    if(a[left]>a[Center]){
        swap(&a[left],&a[right]);
    }
    if(a[left]>a[right]){
        swap(&a[left],&a[right]);
    }
    if(a[Center]>a[right]){
        swap(&a[Center],&a[right]);
    }
    swap(&a[Center],&a[right-1]);
    return a[right-1];
}

void Qsort(int a[],int left,int right){
    int Cutoff=5;
    if (Cutoff<=right-left){
        int Pivot=Median3(a,left,right);
        int low=left;
        int high=right-1;
        while(1){
            while(a[++low]<Pivot);
            while(a[--high]>Pivot);
            if(low<high){
                swap(&a[low],&a[high]);
            }else{
                break;
            }
        }
        swap(&a[low],&a[right-1]);
        Qsort(a,left,low-1);
        Qsort(a,low+1,right);
    }else{
        InsertionSort(a+left,right-left+1);
    }
}

void QuickSort(int a[],int n){
    Qsort(a,0,n-1);
}


int main(){
    int a[]={1, 4, 5, 67, 2, 7, 8, 6, 9, 44};
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        printf("%d\t",a[i]);
    printf("\n"); 
    QuickSort(a,sizeof(a)/sizeof(int));
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        printf("%d\t",a[i]);
    return 0;
}
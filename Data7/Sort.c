#include <stdio.h>
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

void BubbleSort(int a[],int N){//冒泡排序
    int p,i;
    int flag;
    for(p=N-1;p>=0;p--){
        flag=0;//如果没交换
        for (i=0;i<p;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];//交换a[i],a[i+1]
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;//发生交换,继续比较
            }
        }
        if(flag==0){
            break;
        }
    }
}
void BubbleSort2(int a[],int N){//冒泡排序理解型
    int i,j;
    int flag;
    for(i=0;i<N-1;i++){
        flag=0;//如果没交换
        for (j=0;j<N-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];//交换a[i],a[i+1]
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;//发生交换,继续比较
            }
        }
        if(flag==0){
            break;
        }
    }
}
int main(){
    int a[]={44,12,59,36,62,43,94,7,35,52,85};
    //BubbleSort2(a,sizeof(a)/4);
    // for(int i=0;i<sizeof(a)/4;i++){ //选择排序
    //     for (int j=i;j<sizeof(a)/4;j++){
    //         if(a[i]>a[j]){
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

    int flag=0;//判断是否进行了交换
    for(int i=sizeof(a)/4-1;i>=0;i--){
        flag=0;
        for(int j=0;j<sizeof(a)/4;j++){
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    
    for (int i=0;i<sizeof(a)/4;i++){
        printf("%d\t",a[i]);
    }




    return 0;
}
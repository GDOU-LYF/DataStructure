#include <stdio.h>
void sort(int a[],int N){
    int flag=0;//定义未发生交换的情况
    for(int i=10-1;i>=0;i--){
        for (int j=0;j<i;j++){
            if(a[j]>a[j+1]){
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
}
int main(){
    int a[]={1,2,3,7,0,5,6,4,8,9,};
    int b[][3]={1,2,3,7,0,5,6,4,8,};
    //printf("%d",sizeof(b)/sizeof(int));
    int *p;
    p=&b[0][0];
    for (int i=0;i<sizeof(b)/sizeof(int);i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
    // for (int i=0;i<10;i++){
    //     printf("%d\t",a[i]);
    // }
    // printf("\n");
    //sort
    sort(p,sizeof(b)/sizeof(int));
    for (int i=0;i<sizeof(b)/sizeof(int)/3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // for (int i=0;i<10;i++){
    //     printf("%d\t",a[i]);
    // }
    // printf("\n");
    return 0;
}

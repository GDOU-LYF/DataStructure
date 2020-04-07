#include <stdio.h>
#include <stdlib.h>

int FindKthLargest(int a[],int K,int alen);
/*基于问题的分解*/
int main(){
    int a[]={1,3,3,4};
    int K,len;
    len=sizeof(a)/sizeof(int);
    int *p;
    p=a;
    double ret;
    if(len%2==0){//偶数组
        K=len/2; 
        ret=FindKthLargest(p,K,len);
        ret+=FindKthLargest(p,K+1,len);
        printf("%.1f",ret/2);
    }else{//奇数组
        K=(len+1)/2; 
        printf("%d",FindKthLargest(p,K,len));
    }
    //sizeof(a)/sizeof(int)取数组长度
    return 0;
}
int FindKthLargest(int a[],int K,int alen){//-1表示失败
    int ret=-1;
    int e=*a++;//选取基准数字
    alen--;//除去基准和长度!!!!很重要
    int *s1=(int*)calloc(alen,sizeof(int)),n1=0;//大于基准数
    int *s2=(int*)calloc(alen,sizeof(int)),n2=0;//小于基准数

    for(int i=0;i<alen;i++){
        if(*(a+i)>=e){
            *(s1+n1)=*(a+i);
            n1++;
        }else if(*(a+i)<e){
            *(s2+n2)=*(a+i);
            n2++;
        }
    }

    // {//test
    //     for(int i=0;i<n1;i++){
    //         printf("%d",*(s1+i));
    //     }
    //     printf("\n");
    // }
    if(n1==(K-1)){//核心条件!
        ret=e;
    }else if(n1>=K){//说明在S1里面
        ret=FindKthLargest(s1,K,n1);
    }else if(n1<K){
        ret=FindKthLargest(s2,K-n1-1,n2);
    }
    // if (n1<K&&n1>0){//说明在S2里
    //     ret=FindKthLargest(s2,K-n1-1,n2);
    // }else if (n1>=K||n1==0){
    //     if(n1==(K-1)){
    //         ret=e;
    //     }else{
    //         ret=FindKthLargest(s1,K,n1);
    //     }
    // }
    free(s1);
    free(s2);
    return ret;
}

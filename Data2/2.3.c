#include <stdio.h>
#define MAX_N 100000
/*  A的位数最大可能为10万，故涉及大整数，
 此题考虑用字符数组存储大整数各位
 */
int main(void){
    int A, N, i, tempSum, remainder=0;
    int arr[MAX_N+1];
    scanf("%d%d", &A, &N);
    if(N==0){
        printf("0");
        return 0;
    }
    for(i=0; i<N; i++){ /*所有加数中权值相同的位求和，低位向高位进位*/
        tempSum = A*(N-i)+remainder;
        arr[i] = tempSum%10;
        remainder = tempSum/10;
    }//从最低位算起
    if(remainder)
        arr[i] = remainder;
    else
        i--;
    for(;i>=0; i--){
        printf("%d", arr[i]);
    }
    
    return 0;
}
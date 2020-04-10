#include <stdio.h>
void Move(int n,int start,int goal,int temp){
    if(n>=1){
        Move(n-1,start,temp,goal);
        printf("Move disk %dfrom %dto%d.\n",n,start,goal);
        Move(n-1,temp,goal,start);
    }
}


int main(){
    Move(3,1,3,2);
    return 0;
}
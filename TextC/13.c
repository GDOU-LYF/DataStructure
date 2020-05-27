#include <stdio.h>
 double Mean(double a[M][N],int m,int n){
     double v=0.0;
     int i,j;
     for (i=0;i<m;i++){
         for (j=0;j<n;j++){
             v+=a[i][j];
         }
     }
     v/=m*n;
     return v;
 }
int main(){
    




    return 0;
}
#include <stdio.h>
int main(){
    // char a[][10]={"ABCD","EFGH","IJKL","MNOP"};
    // char k;
    // for (k=0;k<=3;k++){
    //     printf("%s\n",&a[k][k]);
    // }
    // char (*p)[10]=a;
    // for (k=0;k<=3;k++){
    //     printf("%s\n",*(p+k)+k);
    // }

    // double f=3.14;
    // printf("%f\n",f);

    //printf("%d",-9%4);
// int *p, k = 5 ;

// p = &k ; ++(*p); //修正错误

int x=1,y=0,a=0,b=0;
switch(x)
{ case 1:switch(y)
 {
 case 0:a++;break;
 case 1:b++;break;
 }
 case 2:a++;b++;break;
 case 3:a++;b++;break;
}
printf("a=%d,b=%d\n",a,b);

switch(x){
    case 0: printf("0\n");
    case 1:printf("1\n");
    case 2:printf("2\n");break;
}

int m[2][3]={0,0,0,1,1,1}, (*p)[3];
p=m;

for(int i=0;i<2*3;i++){
    printf("%d\t",*p[2]  );

}
printf("\n");

printf("%p,%d\n",p[0]+1,p[0]+1);
printf("%p,%d",*(p+2),*(p+2));
}
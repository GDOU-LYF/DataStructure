#include <stdio.h>
int main(){
    int a2;
    char sign;
    int sum=0;
    scanf("%d",&sum);
    do{
        scanf("%c",&sign);
        // if(sign!='+'&&sign!='-'&&sign!='*'&&sign!='/'&&sign!='='){
        //     printf("ERROR");
        //     break;
        // }
        // if(sign=='='){
        //     break;
        // }
        if(sign=='+'){
            scanf("%d",&a2);
           sum+=a2;
        }else if(sign=='-'){
            scanf("%d",&a2);
            sum-=a2;
        }else if(sign=='*'){
            scanf("%d",&a2);
            sum*=a2;
        }else if(sign=='/'){
            scanf("%d",&a2);
            if(a2!=0){
                sum/=a2;
            }else{
                printf("ERROR");
                break;
            }
        }else if(sign=='='){
            break;
        }else{
            printf("ERROR");
            //break;
            exit(0);
        }
    }while(sign!='=');
    if(a2==0&&sign=='/'){

    }else{
        printf("%d",sum);
    }
    return 0;
}
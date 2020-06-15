#include <stdio.h>
int main(){
    int sum,x;
    char op;
    scanf("%d%c",&sum,&op);
    if(op==' '){
        scanf("%c",&op);
    }
    while(op!='='){
        scanf("%d",&x);
        switch(op){
            case '+':
                sum+=x;
                break;
            case '-':
                sum-=x;
                break;
            case '*':
                sum*=x;
                break;
            case '/':
                if(x==0){
                    printf("ERROR\n");
                    return 0;
                }else{
                    sum/=x;
                    break;
                }
            default:
                printf("ERROR\n");
                return 0;
        }
        scanf("%c",&op);
        if(op==' '){
            scanf("%c",&op);
        }
    }
    printf("%d",sum);
    return 0;

}
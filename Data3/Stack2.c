#include <stdio.h>
#include <stdlib.h>
typedef int Position;
typedef struct SNode *PtrToSNode;
typedef int ElementType;
struct SNode
{
    /* data */
    ElementType *Data;
    Position Top1;
    Position Top2;
    int Maxsize;
};
typedef PtrToSNode Stack;

Stack CreateStack(int maxsize){//创建空堆栈
    Stack s=(Stack)malloc(sizeof(struct SNode));
    s->Data=(ElementType*)malloc(maxsize*sizeof(ElementType));
    s->Top1=-1;
    s->Top2=-maxsize;
    s->Maxsize=maxsize;
    return s;
}
int IsFull(Stack s){//判断是否栈满
    return (s->Top1==s->Top2);
}
int push(Stack s,ElementType x,int Tag){//入栈
    if(IsFull(s)){
        printf("Stack is Full!");
        return 0;
    }else{
        if(Tag==1){
            s->Data[++(s->Top1)]=x;
        }else{
            s->Data[--(s->Top1)]=x;
        }
        return 1;
    }
}

// int IsEmpty(Stack s){//判断是否栈空
//     return (s->Top1==-1);
// }

int Pop(Stack s,int Tag){//出栈
    if(Tag==1){
        if(s->Top1==-1){
            printf("Stack1 is empty!");
            return 0;
        }else{
            return(s->Data[(s->Top1)--]);//返回数值.并出栈
        }
    }else{
        if(s->Top2==s->Maxsize){
            printf("Stack2 is empty!");
            return 0;
        }else{
            return(s->Data[(s->Top2)++]);//返回数值.并出栈
        }

    }
}


int main(){


    return 0;
}
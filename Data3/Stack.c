#include <stdio.h>
#include <stdlib.h>
typedef int Position;
typedef struct SNode *PtrToSNode;
typedef int ElementType;
struct SNode
{
    /* data */
    ElementType *Data;
    Position Top;
    int Maxsize;
};
typedef PtrToSNode Stack;

Stack CreateStack(int maxsize){//创建空堆栈
    Stack s=(Stack)malloc(sizeof(struct SNode));
    s->Data=(ElementType*)malloc(maxsize*sizeof(ElementType));
    s->Top=-1;
    s->Maxsize=maxsize;
    return s;
}
int IsFull(Stack s){//判断是否栈满
    return (s->Top==s->Maxsize-1);
}
int push(Stack s,ElementType x){//入栈
    if(IsFull(s)){
        printf("Stack is Full!");
        return 0;
    }else{
        s->Data[++(s->Top)]=x;
        return 1;
    }
}

int IsEmpty(Stack s){//判断是否栈空
    return (s->Top==-1);
}

int Pop(Stack s){//出栈
    if(IsEmpty(s)){
        printf("Stack is empty!");
        return 0;
    }else{
        return(s->Data[(s->Top)--]);//返回数值.并出栈
    }

}


int main(){


    return 0;
}
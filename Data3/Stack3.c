#include <stdio.h>
#include <stdlib.h>
//typedef int Position;

typedef struct SNode *PtrToSNode;
typedef int ElementType;
struct SNode
{
    /* data */
    ElementType *Data;
    PtrToSNode Next;
};
typedef PtrToSNode Stack;

Stack CreateStack(int maxsize){//创建空堆栈
    Stack s=(Stack)malloc(sizeof(struct SNode));
    s->Data=(ElementType*)malloc(maxsize*sizeof(ElementType));
    s->Next=NULL;
    return s;
}
int IsEmpty(Stack s){//判断是否栈空
    return (s->Next==NULL);
}

int push(Stack s,ElementType x){//入栈
    PtrToSNode tempcell;
    tempcell=(PtrToSNode)malloc(sizeof(struct SNode));
    tempcell->Data=x;
    tempcell->Next=s->Next;
    s->Next=tempcell;
    return 1;
}

ElementType Pop(Stack s){//出栈
    PtrToSNode tempcell;
    ElementType TopElem;
    if(IsEmpty(s)){
        printf("Stack is empty!");
        return 0;
    }else{
        tempcell=s->Next;
        TopElem=tempcell->Data;
        s->Next=tempcell->Next;
        free(tempcell);
        return(TopElem);//返回数值.并出栈
    }

}


int main(){


    return 0;
}
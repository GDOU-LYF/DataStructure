#include <stdio.h>
#include <stdlib.h>
typedef struct TNode *Position;
typedef Position BinTree;
typedef int ElementType;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

//堆栈
typedef struct SNode *PtrToSNode;
struct SNode
{
    /* data */
    BinTree Data;
    PtrToSNode Next;
};
typedef PtrToSNode Stack;

Stack CreateStack(){//创建空堆栈
    Stack s=(Stack)malloc(sizeof(struct SNode));
    s->Data=(BinTree)malloc(sizeof(ElementType));
    s->Next=NULL;
    return s;
}
int IsEmpty(Stack s){//判断是否栈空
    return (s->Next==NULL);
}

ElementType push(Stack s,BinTree x){//入栈
    PtrToSNode tempcell;
    tempcell=(PtrToSNode)malloc(sizeof(struct SNode));
    tempcell->Data=x;
    tempcell->Next=s->Next;
    s->Next=tempcell;
    return 1;
}

BinTree Pop(Stack s){//出栈
    PtrToSNode  tempcell;
    Position TopElem;
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
//遍历-递归
void InorderTraversal_M1(BinTree BT){//中序遍历
    if(BT){
        InorderTraversal_M1(BT->Left);
        printf("%d",BT->Data);
        InorderTraversal_M1(BT->Right);
    }
}

void InorderTraversal_F1(BinTree BT){//前/先序遍历
    if(BT){
        printf("%d",BT->Data);
        InorderTraversal_F1(BT->Left);
        InorderTraversal_F1(BT->Right);
    }
}

void InorderTraversal_B1(BinTree BT){//后序遍历
    if(BT){
        InorderTraversal_B1(BT->Left);
        InorderTraversal_B1(BT->Right);
        printf("%d",BT->Data);
    }
}
//遍历-非递归
void InorderTraversal_M2(BinTree BT){//中序遍历
    BinTree T;
    Stack S=CreateStack(1);
    T=BT;
    while(T||!IsEmpty(S)){
        while(T){
            push(S,T);
            T=T->Left;
        }
        T=Pop(S);
        printf("%d",T->Data);
        T=T->Right;
    }
}
void InorderTraversal_F2(BinTree BT){//先序遍历
    BinTree T;
    Stack S=CreateStack(1);
    T=BT;
    while(T||!IsEmpty(S)){
        while(T){
            push(S,T);
            printf("%d",T->Data);
            T=T->Left;
        }
        T=Pop(S);
        T=T->Right;
    }
}
void InorderTraversal_B2(BinTree BT){//后序遍历
    BinTree T;
    Stack S=CreateStack(1);
    T=BT;
    while(T||!IsEmpty(S)){
        while(T){
            push(S,T);
            T=T->Left;
        }
        T=Pop(S);
        T=T->Right;
        printf("%d",T->Data);
    }
}


int main(){




    return 0;
}
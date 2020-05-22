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
    s->Data=(BinTree)malloc(sizeof(BinTree));
    s->Next=NULL;
    return s;
}
int IsEmpty_S(Stack s){//判断是否栈空
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
    if(IsEmpty_S(s)){
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
//队列
typedef struct QNode *PtrToQNode;
typedef enum{False,True}bool;
struct QNode{
    BinTree *Data;
    ElementType Front,Rear;
    ElementType MaxSize;
};
typedef PtrToQNode Queue;

Queue CreateQueue(ElementType Maxsize){//队列创建
    Queue Q=(Queue)malloc(sizeof(struct QNode));
    Q->Data=(BinTree *)malloc(Maxsize *sizeof(BinTree));
    Q->Front =Q->Rear=0;
    Q->MaxSize=Maxsize;
    return Q;
}

bool IsFull_Q(Queue Q){//判断队列是否满了
    return((Q->Rear+1)%Q->MaxSize==Q->Front);
}
bool AddQ(Queue Q,BinTree x){
    if(IsFull_Q(Q)){
        printf("FULL!");
        return False;
    }else{
        Q->Rear=(Q->Rear+1)%Q->MaxSize;
        Q->Data[Q->Rear]=x;
        return True;
    }
}

bool IsEmpty_Q(Queue Q){
    return (Q->Front==Q->Rear);
}
BinTree DeleteQ(Queue Q){
    if(IsEmpty_Q(Q)){
        printf("Empty!");
        return NULL;
    }else{
        Q->Front=(Q->Front+1)%Q->MaxSize;
        return Q->Data[Q->Front];
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
    while(T||!IsEmpty_S(S)){
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
    while(T||!IsEmpty_S(S)){
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
    while(T||!IsEmpty_S(S)){
        while(T){
            push(S,T);
            T=T->Left;
        }
        T=Pop(S);
        T=T->Right;
        printf("%d",T->Data);
    }
}
//层序遍历


int main(){




    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef int Position;
typedef struct QNode *PtrToQNode;
typedef int ElementType ;
typedef enum{False,True}bool;
struct QNode{
    ElementType *Data;
    Position Front,Rear;
    int MaxSize;
};
typedef PtrToQNode Queue;

Queue CreateQueue(int Maxsize){//队列创建
    Queue Q=(Queue)malloc(sizeof(struct QNode));
    Q->Data=(ElementType *)malloc(Maxsize *sizeof(ElementType));
    Q->Front =Q->Rear=0;
    Q->MaxSize=Maxsize;
    return Q;
}

bool IsFull(Queue Q){//判断队列是否满了
    return((Q->Rear+1)%Q->MaxSize==Q->Front);
}
bool AddQ(Queue Q,ElementType x){
    if(IsFull(Q)){
        printf("FULL!");
        return False;
    }else{
        Q->Rear=(Q->Rear+1)%Q->MaxSize;
        Q->Data[Q->Rear]=x;
        return True;
    }
}

bool IsEmpty(Queue Q){
    return (Q->Front==Q->Rear);
}
ElementType DeleteQ(Queue Q){
    if(IsEmpty(Q)){
        printf("Empty!");
        return -1;
    }else{
        Q->Front=(Q->Front+1)%Q->MaxSize;
        return Q->Data[Q->Front];
    }
}
int main(){


    return 0;
}
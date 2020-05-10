#include <stdio.h>
#include <stdlib.h>

typedef int Position;
typedef int ElementType ;
typedef enum{False,True}bool;

typedef struct Node *PtrToNode;
struct Node{
    ElementType Data;
    PtrToQNode Next;
};
typedef PtrToQNode Position;

typedef struct QNode *PtrToQNode;
struct QNode{
    Position Front,Rear;
    int Maxsize;
};
typedef PtrToQNode Queue;

bool IsEmpty(Queue Q){
    return (Q->Front==NULL);
}
ElementType DeleteQ(Queue Q){
    Position FrontCell;
    ElementType FrontElem;
    if(IsEmpty(Q)){
        printf("队列空");
        return -1;
    }else{
        FrontCell=Q->Front;
        if(Q->Front==Q->Rear){
            Q->Front=Q->Rear=NULL;
        }else{
            Q->Front=Q->Front->Next;
        }
        free(FrontCell);
        return FrontElem;
    }
}
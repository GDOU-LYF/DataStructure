#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct AVLNode *Position;
typedef Position AVLTree;
typedef struct AVLNode{
    ElementType Data;
    AVLTree Left;
    AVLTree Right;
    int Height;//树高,计算平衡因子需要用
};
int GetHeight(AVLTree T);

AVLTree SingleLeftRotation(AVLTree A);
AVLTree SingleRightRotation(AVLTree A);
AVLTree DoubleLeftRightRotation(AVLTree A);
AVLTree DoubleRightLeftRotation(AVLTree A);

int Max(int a,int b){
    return a>b?a:b;
}

AVLTree Insert(AVLTree T,ElementType X){
    if(!T){
        T=(AVLTree)malloc(sizeof(struct AVLNode));
        T->Data=X;
        T->Left=T->Right=NULL;
        T->Height=1;
    }else if(X<T->Data){ //L
        T->Left=Insert(T->Left,X);
        if(GetHeight(T->Left)-GetHeight(T->Right)==2){//平衡因子大于1
            if(X<T->Left->Data){ //结点数据大于插入的数据,L
                T=SingleLeftRotation(T);
            }else{//L-R
                T=DoubleLeftRightRotation(T);
            }
        }
    }else if(X<T->Data){ //R
        T->Right=Insert(T->Right,X);
        if(GetHeight(T->Left)-GetHeight(T->Right)==-2){//平衡因子大于1
            if(X<T->Right->Data){ //结点数据小于插入的数据,R
                T=SingleRightRotation(T);
            }else{//R-L
                T=DoubleRightLeftRotation(T);
            }
        }
    }
    T->Height=Max(GetHeight(T->Left),GetHeight(T->Right))+1;
    return T;
}

int GetHeight(AVLTree T){
    int HL,HR;
    if(T){
        HL=GetHeight(T->Left);
        HR=GetHeight(T->Right);
        return Max(HL,HR)+1;
    }else{
        return 0;
    }
}

AVLTree SingleLeftRotation(AVLTree A){//RR
    AVLTree B=A->Left;
    A->Left=B->Right;
    B->Right=A;
    A->Height=Max(GetHeight(A->Left),GetHeight(A->Right))+1;
    B->Height=Max(GetHeight(B->Left),A->Height)+1;
    return B;
}

AVLTree SingleRightRotation(AVLTree A){//RR
    AVLTree B=A->Right;
    A->Right=B->Left;
    B->Left=A;
    A->Height=Max(GetHeight(A->Left),GetHeight(A->Right))+1;
    B->Height=Max(A->Height,GetHeight(B->Right))+1;
    return B;
}

AVLTree DoubleLeftRightRotation(AVLTree A){//l-R
    A->Left=SingleRightRotation(A->Left);//RR
    return SingleLeftRotation(A);//LL(RR)
}
AVLTree DoubleRightLeftRotation(AVLTree A){//R-L
    A->Left=SingleLeftRotation(A->Left);//LL
    return SingleRightRotation(A);//RR(LL)
}
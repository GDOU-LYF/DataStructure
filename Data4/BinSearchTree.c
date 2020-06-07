#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
typedef struct TNode *Position;
typedef Position BinTree;
typedef int ElementType;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

Position Find(BinTree BST,ElementType X){//递归
    if (!BST){
        return NULL;
    }
    if(X>BST->Data){
        return Find(BST->Right,X);
    }else if(X<BST->Data){
        return Find(BST->Left,X);
    }else{
        return BST;
    }
}

Position Find2(BinTree BST,ElementType X){//非递归查找
    while(BST){
        if(X>BST->Data){
            BST=BST->Right;
        }else if(X<BST->Data){
            BST=BST->Left;
        }else{
            break;
        }
    }
    return BST;
}

Position FindMin(BinTree BST){//寻找最小值
    // if(!BST){
    //     return NULL;
    // }else if(!BST->Left){
    //     return BST;
    // }else{
    //     return FindMin(BST->Left);
    // }
    if(BST){
        while(BST->Left){
            BST=BST->Left;//最小值在最左边
        }
    }
    return BST;
}
Position FindMAX(BinTree BST){//寻找最大值
    if(BST){
        while(BST->Right){
            BST=BST->Right;//最大值在最右边
        }
    }
    return BST;
}

BinTree Insert(BinTree BST,ElementType X){//插入数据
    if(!BST){
        BST=(BinTree)malloc(sizeof(struct TNode));
        BST->Data=X;
        BST->Left=BST->Right=NULL;
    }else{
        if(X<BST->Data){
            BST->Left=Insert(BST->Left,X);
        }else if(X>BST->Data){
            BST->Right=Insert(BST->Right,X);
        }
    }
    return BST;
}

BinTree Delete(BinTree BST,ElementType X){
    if(!BST){
        printf("Not Find!");
    }else{
        if(X<BST->Data){
            BST->Left=Delete(BST->Left,X);
        }else if(X>BST->Data){
            BST->Right=Delete(BST->Right,X);
        }else{
            Position tmp;
            if(BST->Left&&BST->Right){//有左右结点
                tmp=FindMin(BST->Right);//找右子树最小的结点
                BST->Data=tmp->Data;//赋值数据
                BST->Right=Delete(BST->Right,BST->Data);//将最小的元素删除
            }else{//只有一个左/右结点
                tmp=BST;
                if(!BST->Left){
                    BST=BST->Right;
                }else{
                    BST=BST->Left;
                }
            }
            free(tmp);//释放TMP临时树
        }
    }
    return BST;
}
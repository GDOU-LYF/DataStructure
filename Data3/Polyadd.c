#include <stdio.h>
#include <stdlib.h>
int Compare(int e1,int e2){ //比较大小
    if(e1>e2){
        return 1;
    }else if(e1<e2){
        return -1;
    }else{
        return 0;
    }
}
typedef int ElementType;
typedef struct PolyNode PolyNode;
struct PolyNode{
    ElementType coef;
    ElementType expon;
    PolyNode *link;
};
typedef PolyNode *Polynomial;

void Attach(int coef,int expon,Polynomial *PtrRear){
    Polynomial P;
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->coef=coef;
    P->expon=expon;
    P->link=NULL;
    (*PtrRear)->link=P;
    *PtrRear=P;
}

Polynomial PolyAdd(Polynomial p1,Polynomial p2){
    Polynomial front,rear,temp;
    int sum;

    rear=(Polynomial)malloc(sizeof(struct PolyNode));
    front=rear;
    while(p1&&p2){
        switch(Compare(p1->expon,p2->expon)){
            case 1:
                Attach(p1->coef,p1->coef,&rear);
                p1=p1->link;
                break;
            case -1:
                Attach(p2->coef,p2->coef,&rear);
                p2=p2->link;
                break;
            case 0:
                sum=p1->coef+p2->coef;
                if(sum){
                    Attach(sum,p1->expon,&rear);
                    p1=p1->link;
                    p2=p2->link;
                    break;
                }
        }
    }  
    for(;p1;p1=p1->link){
        Attach((*p1).coef,p1->expon,&rear);
    }
    for(;p2;p2=p2->link){
        Attach((*p2).coef,p2->expon,&rear);
    }
    rear->link=NULL;
    temp=front;
    front=front->link;
    free(temp);
    return front;
}
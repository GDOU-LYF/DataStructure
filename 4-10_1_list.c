#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
 }Node;

typedef struct _list{
    Node *head;
}List;
void Node_Add(List*plist,int number);
void Node_Add2(List*plist,int number);
void Print(List *plist);
void Node_free(List *plist);
void Node_Dele(List *plist,int number);
void Node_Find(List *plist,int number);
Node* Reverse(List *plist);

 int main()
 {
    int a;
    List list;
    list.head=NULL;
    scanf("%d",&a);
     while(a!=-1){
        Node_Add(&list,a);
        scanf("%d",&a);
     }
     //输出链表
    Print(&list);
    //逆转
    Reverse(&list);//list.head=Reverse(&list)
    Print(&list);
    //释放链表
    Node_free(&list);
    return 0;
 }

void Node_Add(List*plist,int number){//添加结点(尾插)
            Node *p=(Node*)malloc(sizeof(Node));
            p->data=number;
            p->next=NULL;
            Node *last=plist->head;
            if(last){
                while(last->next){//NULL!=last->next
                    last=last->next;
                }
                last->next=p;
            }else{
                plist->head=p;
            }
        // return head;
}
void Node_Add2(List*plist,int number){//添加结点(头插)
            Node *p=(Node*)malloc(sizeof(Node));
            p->data=number;
            //p->next=NULL;
            //Node *last=plist->head;
            p->next=plist->head;
            plist->head=p;
        // return head;
}
void Print(List *plist){
    Node *p;
    for(p=plist->head;p;p=p->next){
        printf("%d\t",p->data);
    }
    printf("\n");
}
void Node_free(List *plist){
    Node *p,*q;
    for(p=plist->head;p;p=q){
        q=p->next;
        free(p);
    }
}



void Node_Dele(List *plist,int number){//删除单结点
    Node *p;
    Node *q;
    for(q=NULL,p=plist->head;p;q=p,p=p->next){
        if(p->data==number){
            if(q){
                q->next=p->next;
            }else{
                plist->head=p->next;
            }
            free(p);
            break;
        }
    }
}
void Node_Find(List *plist,int number){//寻找
    Node *p;
    int isFound=0;
    for(p=plist->head;p;p=p->next){
        if(p->data==number){
            printf("find!\n");
            isFound=1;
            break;
        }
    }
    if(!isFound){
        printf("NO find!\n");
    }
}

Node* Reverse(List *plist){//逆转
    Node *old,*new,*temp;
    old=plist->head;
    new=NULL;
    while(old){
        temp=old->next;
        old->next=new;
        new=old;
        old=temp;
    }
    plist->head=new;
    return plist->head;
}
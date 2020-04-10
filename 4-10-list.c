
// //https://zhuanlan.zhihu.com/p/85504177?utm_source=qq&utm_medium=social&utm_oi=991631430170116096
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct list_node{
//     int data;
//     struct list_node *next;
// }L;

// L *create_list_node(int data){//创建节点
//     L *node=NULL;//头结点
//     node =(L*)malloc(sizeof(L));//分配内存
//     if(node==NULL){
//         printf("EROO!");
//         return NULL;
//     }
//     memset(node,0,sizeof(L));
//     //设置s中的所有字节为ch, s数组的大小由n给定 
//     node->data=data;
//     node->next=NULL;//下一个指针指向NULL
//     //printf("%d\n",node->data);
//     //free(node);
//     return node;
// }
// void tail_insert(L *header,L *new){//单链表的尾插
//     L *p=header;
//     while(NULL!=p->next){
//         p=p->next;
//         p->next=new;
//     }
// }
// void top_insert(L *ph,L *new){//单链表的头插
//     L *p=ph;
//     new->next=p->next;
//     p->next=new;
// }
// void Print_node(L *ph){//打印数据
//     L *p=ph;
//     p=p->next;
//     //p=p->next;//头结点不需要打印
//     while(NULL!=p->next){
//         p=p->next;
//         printf("node:%d\n",p->data);
//     }
// }
// int detele_list_node(L *pH , int data){
//     L *p=pH;//当前节点
//     L *prev=NULL;//当前节点的上一个节点
//     while(p->next!=NULL){
//         prev=p;
//         p=p->next;
//         if(p->data==data){
//             if(p->next==NULL){
//                 prev->next=NULL;
//             }else{
//                 prev->next=p->next;
//             }
//             free(p);
//             return 0;
//         }
//     }
//     printf("没有要删除的结点\n");
//     return -1;
// }
// L* Reverse(L *ph){
//     // L *old,*new;
//     // old=ph->next;
//     // int i=0;
//     // if(old->next==NULL||old==NULL){
//     //     return ;
//     // }
//     // while(p->next!=NULL){

//     // }
//     L *old,*new,*temp;
//     old=ph->next;
//     new=NULL;
//     while(old){
//         temp=old->next;
//         old->next=new;
//         new=old;
//         old=temp;
//     }
//     ph=new;
//     return ph;

// }

// int main(){
//     int i;
//     L *node_ptr=create_list_node(0);//头结点
//     for(int i=1;i<10;i++){
//         tail_insert(node_ptr,create_list_node(i));
//     }
// 	Print_node(node_ptr);
//     node_ptr=Reverse(node_ptr);
//     Print_node(node_ptr);
//     //free(node_ptr);
//     return 0;
// }

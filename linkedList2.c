#include<stdio.h>

typedef struct Node{

 int data;
 struct Node *next;

} node;
node *head=NULL;
void print(node *x){
 //printf("%d\t%p",x.data,x.next);
  printf("%p\t%d\t%p\n",x,x->data,x->next);



}
void print_all(node *x){

  while(x!=NULL){
    printf("%d\t",x->data);
    x=x->next;
  }
}

int main(){

 node a,b,c,d;
 head=&a;
 a.data=5;
 a.next=&b;
 b.data=6;
 b.next=&c;
 c.data=7;
 c.next=&d;
 d.data=8;
 d.next=NULL;

 //print(&a);
 //print(&b);
 //print(&c);
 //print(&d);
 print_all(head);



//printf("%d\t%p\n",a.data,a.next);
 //printf("%p\t%p\t%p",&a,&a.data,&a.next);
  // printf("%p\t%d\t%p\n",&a,a.data,a.next);


// print(a);
 //print(&a);





 return 0;
}

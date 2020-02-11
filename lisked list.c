#include<stdio.h>

int main(){

  while(menu()!=5);
  insert();

return 0;
}

int menu(){

 int op;

 printf("Select linked list Operation\n");

 scanf("%d",&op);

 if(op==1){
    printf("Insert Operation\n");
 }
 else if(op==2){
    printf("Delete Operation\n");
 }
 else if(op==3){
        printf("Update Operation\n");

 }
 else if(op==4){
        printf("update Operation\n");

 }
 else if(op==5){
        printf("Colse Operation\n");

 }
 else{
        printf("Invalid Operation try again\n");

 }
 return op;

}
void insert(){

     int ap;

 printf("Select Insert Operation\n");

 scanf("%d",&ap);

 if(ap==1){
        insert();
    printf("Push front Operation\n");
 }
 else if(ap==2){
     insert();
    printf("Push back Operation\n");
 }
 else if(ap==3){
     insert();
        printf("Push After Operation\n");

 }
 else if(ap==4){
        insert();
        printf("Push before Operation\n");

 }
 else if(ap==5){
        insert();
        printf("Push at Operation\n");

 }

 else {
    printf("Invalid");
 }

}

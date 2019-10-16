//Linked list based implementation of Queue
#include <stdio.h>

struct qnode{
int data;
struct qnode* next;
};

struct qnode* head = NULL;
void insert(int);
int pop();

void main(){



}

void insert(int x){

if(head == NULL){
struct qnode* temp = (struct qnode*)malloc(sizeof(struct qnode));
temp->data = x;
temp->next = NULL;
head = temp;
}
else{
struct qnode* temp = (struct qnode*)malloc(sizeof(struct qnode));
temp->data = x;
temp->next = head;
head = temp;
}
}

int pop(){
int r;
if(head == NULL){
    printf("The process is complete");
}
else{
 struct qnode* pt;
 pt = head;
 head = head->next;
 r = pt->data;
 free(pt);
 return r;
}
};

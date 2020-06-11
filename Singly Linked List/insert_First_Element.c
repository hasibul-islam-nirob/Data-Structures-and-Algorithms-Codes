
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head;

/// Data insert 1st Element
void insertFirst(int value){
        Node *temp = (Node *) malloc(sizeof(Node));
        temp->data = value;
        temp->next = head;
        head = temp;
}

/// Display Function
void print(){
    Node *temp;
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    int value;
    Node *newData;
    head = NULL;
    printf("\n");
    printf("Default Data In Linked List : \n");
    insertFirst(19);
    insertFirst(61);
    insertFirst(50);
    insertFirst(30);
    insertFirst(25);
    print();
    printf("\n");

    printf("Enter Any Data How You Insert '1st' Element : ");
    scanf("%d",&value);
    printf("\n");

    printf("After Insert :  ");
    insertFirst(value);
    print();
    printf("Data Insert Successfully !\n");

    return 0;
}

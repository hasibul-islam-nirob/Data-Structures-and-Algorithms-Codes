#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head;

/// Data Insert Last Element
void insertLast(int value){
    Node *temp = (Node *) malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        Node *temp2;
        temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}


/// Data Display Function
void print(){
    Node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    head = NULL;
    int value;
    Node *newData;

    printf("\n");
    printf("Default Data In Linked List : \n");;

    insertLast(41);
    insertLast(30);
    insertLast(65);
    insertLast(15);
    insertLast(25);
    print();


    printf("\n");
    printf("Enter Any Value 'How You Want Insert Last Element In Linked List' = ");
    scanf("%d",&value);
    printf("\n");
    insertLast(value);
    print();
    printf("Data Insert Successfully !\n");

    return 0;
}

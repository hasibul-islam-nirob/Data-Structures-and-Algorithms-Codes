#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *head;

/// Data Insert Last Element Function
void insertLast(int value){
    Node *temp = (Node *)malloc(sizeof(Node));
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
        temp2->next = temp->next;
        temp2->next = temp;
    }
}

/// Delete Data of Last Element Function
void deleteLast(int position){

        Node *temp;
        temp = head;
        for(int i=1; i<=position-2; i++){
            temp = temp->next;
        }
        Node *temp2;
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);

}

/// Print Function
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
    int test,nth,position;

    printf("Total Insert data : ");
    scanf("%d",&nth);
    int def = nth;
    while(nth--){
        scanf("%d",&test);
        insertLast(test);
    }
    printf("Linked List Before Delete Is : ");
    print();
    printf("\n");

    printf("Enter '%d' Delete For 'Last' Node : ",def);
    scanf("%d",&position);

    if(position == def){
        deleteLast(position);
        printf("After Delete Linked List Is \n");
        print();

    }else{
        printf("OverFollow \n");
    }


    return 0;
}

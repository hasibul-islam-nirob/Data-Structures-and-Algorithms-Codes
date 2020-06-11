
#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *head;
/// Data Insert 1st Element Function
void insertFirst(int value){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = head;
    head = temp;
}

/// Data Delete in 1st Element Function
void deleteNode(int position){
    if(position == 0){
        Node *temp;
        temp = head;
        head = head->next;
        free(temp);
    }
}

///Data Print Function
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
    int Test,n;

    printf("Total Insert data : ");
    scanf("%d",&Test);

    while(Test--){
        scanf("%d",&n);
        insertFirst(n);
    }
    printf("Linked List Before Delete Is : ");
    print();
    printf("\n");

    printf("Enter '0' Delete For 1st Node : ");
    int position;
    scanf("%d",&position);

    if(position != 0){
        printf("OverFollow \n");
    }else{
        deleteNode(position);
        printf("After Delete Linked List Is \n");
        print();
    }

    return 0;
}

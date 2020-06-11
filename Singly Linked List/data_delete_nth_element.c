#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *head;

void insertLast(int value);
int countNode(Node *head);
void deleteNode();
void print();

///Data Insert Last Element Function
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

///Node Delete nth position Function
void deleteNode(){
    int position;
    printf("Enter Any Key ('1 to %d')Position For Delete Node : ",countNode(head));
    scanf("%d",&position);
    if(position <= countNode(head)){
        if(position == 1){
            Node *temp;
            temp = head;
            head = head->next;
            free(temp);
        }else{
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

    }else{
        printf("Overflow \n");
    }

}

/// Node Count Function
int countNode(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
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
    int nth,test,position,constt;

    printf("Total Insert data : ");
    scanf("%d",&nth);
    constt=nth;
    while(nth--){
        scanf("%d",&test);
        insertLast(test);
    }
    printf("Linked List Before Delete  : ");
    print();
    //printf("\n");
    printf("\n");
    switch(1){
        case 1:
            deleteNode();
            print();
            printf("Total Length Of List : %d\n\n",countNode(head));
        case 2:
            deleteNode();
            print();
            printf("Total Length Of List : %d\n\n",countNode(head));
        case 3:
            deleteNode();
            print();
            printf("Total Length Of List : %d\n\n",countNode(head));
        case 4:
            deleteNode();
            print();
            printf("Total Length Of List : %d\n\n",countNode(head));

    }

    return 0;
}

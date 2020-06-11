#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *head;

/// Data Insert Function
void insert(int data){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        Node *temp2;
        temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
}

/// Print Function
void print(){
    int sum =0;
    while(head != NULL){
        printf("%d  ",head->data);
        sum = sum + head->data;
        head = head->next;
    }
    printf("\n\n");
    printf("Sum Of All Nodes Element Is = %d \n",sum);
}

int main(){
    head = NULL;
    int nth,test;

    printf("Total Insert data : ");
    scanf("%d",&nth);
    while(nth--){
        scanf("%d",&test);
        insert(test);
    }
    printf("Traversal The All Node & List Is : ");
    print();

    return 0;
}

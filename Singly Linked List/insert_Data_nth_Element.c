#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head;

/// Insert 1st Element
void insertData(int value){
    Node *temp = (Node *) malloc(sizeof(Node));
    temp->data = value;
    temp->next = head;
    head = temp;
}
/// Count Data of Linked List
int countData(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

/// Insert Data nth Position
void insertData_nth_position(){
    int position,i,value;

    printf("Enter New Data : ");
    scanf("%d",&value);

    Node *temp = (Node *) malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    printf("Enter Position 'Where Are You Insert Data'1 to %d'' : ",countData(head));
    scanf("%d",&position);
    if(position > countData(head)){
         printf("Overflow \n");
    }else{
        if(position == 1){
            temp->data = value;
            temp->next = head;
            head = temp;

        }else{
            Node *temp2;
            temp2 = head;
            for(i=1; i<position-1; i++){
                temp2 = temp2->next;
            }
            temp->next = temp2->next;
            temp2->next = temp;
        }
         print();
    }

}

/// Display Function
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

    int T,n;

    printf("Default Data In Linked List : \n");
    insertData(10);
    insertData(24);
    insertData(13);
    insertData(50);
    insertData(41);
    print();
    printf("Total Length Of List : %d\n",countData(head));
    printf("\n");

    switch(1){
        case 1:
            insertData_nth_position();
            printf("Total Length Of List : %d\n\n",countData(head));
        case 2:
            insertData_nth_position();
            printf("Total Length Of List : %d\n\n",countData(head));
        case 3:
            insertData_nth_position();
            printf("Total Length Of List : %d\n\n",countData(head));
    }

    return 0;
}

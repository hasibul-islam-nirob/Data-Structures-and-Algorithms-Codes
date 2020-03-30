#include<stdio.h>
#define Q_SIZE 5

typedef struct{
    int data[Q_SIZE+1];
    int head ;
    int tail ;
}Queue;

void enqueue(Queue*q, int item){
    if( (q->tail = (q->tail+1) % (Q_SIZE +1)== q->head) ){
        printf("Queue is Full\n");
        return;
       }

    q->data[q->tail] = item;
    q->tail = (q->tail+1) % (Q_SIZE +1);
}

int dequeue(Queue*q){
    int item;
    if( q->tail == q->head +1 ){
        printf("Queue is empty\n");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head +1) % (Q_SIZE +1);
    return item;
}

int main(){
    int data[10]={1,2,3,4,5,6,7,8};

    Queue my_q;
    int item;

    my_q.head =0;
    my_q.tail =0;

    enqueue(&my_q, 1);
    printf("Tail = %d\n",my_q.tail);
    enqueue(&my_q, 2);
    printf("Tail = %d\n",my_q.tail);
    enqueue(&my_q, 3);
    printf("Tail = %d\n",my_q.tail);
    enqueue(&my_q, 4);
    printf("Tail = %d\n",my_q.tail);
    enqueue(&my_q, 5);
    printf("Tail = %d\n",my_q.tail);
    enqueue(&my_q, 6);
    printf("Tail = %d\n",my_q.tail);

    printf("Beginning Head = %d\n",my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);
    item = dequeue(&my_q);
    printf("Item = %d, Head = %d\n",item,my_q.head);



return 0;
}




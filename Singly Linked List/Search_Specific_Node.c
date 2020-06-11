#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
  int data;
  Node *next;
}head, *tail;

int search(int key){
	int count=1;
	tail=&head;
	while(tail->next!=NULL){
		if(tail->data==key)
			break;
		else
			count++;
			tail=tail->next;
	}
	return count;
}

int main(){
	int n,i,key,position;
	head.next=NULL;
	tail=&head;

    printf("Enter Total Number Of Nodes : ");
    scanf("%d", &n);
	for(i=0;i< n;i++){
		tail->next=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&tail->data);
		tail=tail->next;
	}
	tail->next=NULL;

	printf("Our Linked List Is  : ");
    tail=&head;
	while(tail->next!=NULL){
		printf("%d  ",tail->data);
		tail=tail->next;
	}

	printf("\n");
	printf("Enter The Element To Be Search : ");
	scanf("%d",&key);
	position=search(key);
	if(position<=n)
                                                                                printf("Element Found Node Is = %d \n",position);
	else
		printf("This Element Not Found.\n");

    return 0;
}

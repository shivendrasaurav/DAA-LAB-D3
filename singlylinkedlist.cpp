#include<stdio.h>
#include<stdlib.h>

struct sll{
	int data;
	struct sll *next;
};

typedef struct sll node;
node *ptr,*head;

void insert(int data, node *ptr){
	while(ptr->next!=NULL)
	    ptr->next=ptr;
	node *newe=(node*)malloc(sizeof(node));
	newe->data=data;
	newe->next=NULL;
	ptr->next=newe;
}

void print(node *a){
	if(a!=NULL)
	    printf("%d, ",a->data);
	print(a->next);
}

int main(){
	head=(node*)malloc(sizeof(node));
	ptr=head;
	head->next=ptr;
	ptr->next=NULL;
	insert(12,ptr);
	print(ptr->next);
}

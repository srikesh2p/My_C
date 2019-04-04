#include<stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *link;
};

void add2begin(struct node *start, int data)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	start= p;
	p->info=data;
	p->link=NULL;
}
void crearte_list(struct node *start)
{
	int no, data;
	int i;
	printf("Enter number of node\n");
	scanf("%d", &no);
	printf("Enter the data\n\r");
	scanf("%d", &data);
	add2begin(start, data);
#if 0
	for(i=0; i < num; i++)
	{

	}
	for (i=0; i< num; i++)
	{
	}
	start = &new;
	new.info=5;
	new.ptr=NULL;
#endif
}
int main()
{
	struct node *start=NULL;

	crearte_list(start);
}

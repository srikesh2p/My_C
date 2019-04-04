#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *ptr;
};

int main()
{
	struct node *start= NULL;
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->info=5;
	start=new->ptr;
	new->ptr=NULL;
	printf("%d", new->info);
}

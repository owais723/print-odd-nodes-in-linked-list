#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void sort();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("press 1 for  create \n2 for view\n3 for sort in assending order");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:sort();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 //view fun
 void view()
 {
 	struct node*t;
 	t=head;
 	while(t!=NULL)
 	{
 		printf("%d\t",t->data);
 		t=t->next;
	}
	printf("\n");
 }
void sort()
 {
 	struct node*i,*j;
 	int temp;
 	for(i=head;i->next!=NULL;i=i->next)
 	{
 		for(j=i->next;j!=NULL;j=j->next)
		 {
 		if(i->data>j->data)
 		{
 			temp=i->data;
 			i->data=j->data;
 			j->data=temp;
		 }
	 }
 }
}

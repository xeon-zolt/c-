
#include<stdio.h>

void ch();

struct node{int info;
            struct node *next;
           }*head=NULL;

void reverse(struct node*ptr)
 { while(ptr!=NULL)
   { printf("%d",ptr->info);
      ptr=ptr->next;
   }
}

void inorder_trav(struct node*ptr)
{if(ptr->next!=NULL)
  { reverse(ptr->next);
  }
   printf("%d",ptr->info);
}

void traverse()
	{
		int choice_2;
		printf("\t\t1.For InOrder Traverse\n");
		printf("\t\t2.For ReverseOrder Traverse\n");
		printf("\t\t3.For Previous Menu");
		printf("\t\tCtrl + Z to exit\n\n\t\t");
		scanf("%d",&choice_2);
		switch (choice_2)
			{
			case 1:
				inorder_trav(head);
					traverse();
				break;
			case 2:
				reverse(head);
					traverse();
				break;
			case 3:
				ch();
				break;	
			default:
				printf("Invalid Input");
				traverse();
				break;
				
				}
		}

void insertion()
{
	int choice_3;
		printf("\t\t1.For Insertion at Beg\n");
		printf("\t\t2.For Insertion at End\n");
		printf("\t\t3.For Inertion after a given Node\n");
		printf("\t\t4.For Previous Menu\n");
		printf("\t\tCtrl + Z to exit\n\n\t\t");
		scanf("%d",&choice_3);
		switch (choice_3)
			{
			case 1:
				
					insertion();
				break;
			case 2:
				
					insertion();
				break;
			case 3:
			
				insertion();
				break;
			case 4:
				ch();
				break;		
			default:
				printf("Invalid Input\n");
				insertion();
				break;
				
				}
	}



void deletion()
{
	int choice_4;
		printf("\t\t1.For Deletion at Beg\n");
		printf("\t\t2.For Delition at End\n");
		printf("\t\t3.For Deletion after a given Node\n");
		printf("\t\t4.For Deletion of entire list\n");
	    printf("\t\t5.For Previous Menu\n");
		printf("\t\tCtrl + Z to exit\n\n\t\t");
		scanf("%d",&choice_4);
		switch (choice_4)
			{
			case 1:
				
					deletion();
				break;
			case 2:
				
					deletion();
				break;
			case 3:
				
					deletion();
				break;
			case 4:
				
					deletion();
				break;		
			case 5:
				ch();
				break;	
			default:
				printf("Invalid Input\n");
				deletion();
				break;
				
				}
	}

int search(struct node *ptr)
{ int n;
  printf("enter the info to be searched\n");
  scanf("%d",&n);
  while(ptr!=NULL && ptr-> info!=n)
  {ptr=ptr->next;
  }
 return(ptr);
}

void insert(struct node *ptr)
 { int element;
  struct node*new;
  printf("enter the value to be inserted\n");
  scanf("%d",&element);
  new=(struct node *) malloc(sizeof (struct node));
  new->info=element;
  new->next=head;
  head=new;
}


void ch()
{
	int choice ;
printf("\nEnter your choice\n\n");
printf("\t1.Create List\n");
printf("\t2.Search In List\n");
printf("\t3.Traverse List\n");
printf("\t4.Insertion Into List ---> under construction\n");
printf("\t5.Delete From List ---> under construction \n");
printf("\t Ctrl + Z to exit\n\n\t");
scanf("%d",&choice);
switch (choice){
	case 1:
		insert(head);
		ch();
		break;
	case 2:
		{ int *loc;
        loc=search(head);
        if(loc==NULL)
        printf("value not found\n");
        else
        printf("value found\n");
        return;
        }
        ch();
		break;	
	case 3:
		traverse();	
		break;
	case 4:
		//insertion();
		// enter insert_atbeg() insert_atend() insert_after_node() into insertion
		break;
	case 5:
		//deletion();
		// enter delete_atbeg() delete_atend() delete_after_node() delete_entire_list ()
		//into deletion
		break;
	default:
		printf("invalid input\n");
		ch();
		break;
	}	
	}

int main()
{
	ch();
return 0;	
}

/*
NAME - HARSH LATHWAL
14CSU070
Date - 21/AUG/15
About - circular singly linkled list
*/
#include <stdio.h>
#include <stdlib.h>

    struct node
    {
        int data;
        struct node *link;
    };
    struct node *head = NULL, *x, *y, *z;
//	functions
	void create(); 
    void traverse();
    void search();
    void insertion();
    void delertion();
    void ins_at_beg();
    void ins_at_pos();   
    void del_at_beg();
    void del_at_pos();  
    
void ch()
{
	int choice ;
printf("\nEnter your choice\n\n");
printf("\t1.Create List\n");
printf("\t2.Search In List\n");
printf("\t3.Traverse List\n");
printf("\t4.Insertion Into List \n");
printf("\t5.Delete From List \n");
printf("\t Ctrl + Z to exit\n\n\t");
scanf("%d",&choice);
switch (choice){
	case 1:
		create(); 
		ch();
		break;
	case 2:
		search();
		ch();
		break;	
	case 3:
		traverse();
		ch();
		break;
	case 4:
		insertion();
		break;
	case 5:
		delertion();
		break;
	default:
		printf("invalid input\n");
		ch();
		break;
	}	
	}

void insertion()
{
	int choice_3;
		printf("\t\t1.For Insertion at Beg\n");
		printf("\t\t2.For Insertion at position\n");
		printf("\t\t4.For Previous Menu\n");
		printf("\t\tCtrl + Z to exit\n\n\t\t");
		scanf("%d",&choice_3);
		switch (choice_3)
			{
			case 1:
				     ins_at_beg(); 
					 insertion();			     
				break;
			case 2:
					ins_at_pos(); 
				    insertion();					
				break;
			case 3:
				ch();
				break;		
			default:
				printf("Invalid Input\n");
				insertion();
				break;
				
				}
	}
	
void delertion()
{
	int choice_3;
		printf("\t\t1.For Deletion at Beg\n");
		printf("\t\t2.For Deletion at position\n");
		printf("\t\t3.For Previous Menu\n");
		printf("\t\tCtrl + Z to exit\n\n\t\t");
		scanf("%d",&choice_3);
		switch (choice_3)
			{
			case 1:
				     del_at_beg(); 
					 delertion();			     
				break;
			case 2:
					del_at_pos(); 
				    delertion();					
				break;
			case 3:
				ch();
				break;		
			default:
				printf("Invalid Input\n");
				insertion();
				break;
				
				}
	}	

int main()
	{
		ch();
		return 0;
		}	

 void create()
    {
        int c;
        x = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data:");
        scanf("%d", &x->data);
        x->link = x;
        head = x;
        printf("\n If you wish to continue press 1 otherwise 0:");
        scanf("%d", &c);
        while (c != 0)
        {
            y = (struct node*)malloc(sizeof(struct node));
            printf("\n Enter the data:");
            scanf("%d", &y->data);
            x->link = y;
            y->link = head;
            x = y;
            printf("\n If you wish to continue press 1 otherwise 0:");
            scanf("%d", &c); 
        }
    }
    
void traverse()
    {
        if (head == NULL)
            printf("\n List is empty");
        else
        {
            x = head;
            while (x->link !=  head)
            { 
                printf("%d->", x->data);
                x = x->link;
            }
            printf("%d", x->data);
        }
    }

void search()
    {
        int search_val, count = 0, flag = 0;
        printf("\nenter the element to search\n");
        scanf("%d", &search_val);
        if (head == NULL)
            printf("\nList is empty nothing to search");
        else
        {
            x = head;
            while (x->link !=  head)
            {
                if (x->data == search_val)
                {
                    printf("\nthe element is found at %d", count);
                    flag = 1;
                    break;
                }
                count++;
                x = x->link;
            }
            if (x->data == search_val)
            {
                printf("element found at postion %d", count);
            }
            if (flag == 0)
            {
                printf("\nelement not found");
            }     
        }
    }
    
void ins_at_beg()
    {
        x = head;
        y = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data:");
        scanf("%d", &y->data);
        while (x->link != head)
        {
            x = x->link;
        }
        x->link = y;
        y->link = head;
        head = y;
    }
          
    void ins_at_pos()
    {
        struct node *ptr;
        int c = 1, pos, count = 1;
        y = (struct node*)malloc(sizeof(struct node));
        if (head == NULL)
        {
            printf("cannot enter an element at this place");
        }
        printf("\n Enter the data:");
        scanf("%d", &y->data);
        printf("\n Enter the position to be inserted:");
        scanf("%d", &pos);
        x = head;
        ptr = head;
        while (ptr->link != head)
        {
            count++;
            ptr = ptr->link;
        }
        count++;
        if (pos > count)
        {
            printf("OUT OF BOUND");
            return;
        }
        while (c < pos)
        {
            z = x;
            x = x->link;
            c++;
        }
        y->link = x;
        z->link = y;
    }
    

  void del_at_beg()
    {
        if (head == NULL) 
            printf("\n List is empty");
        else
        {
            x = head;
            y = head;
            while (x->link !=  head)
            {
                x = x->link;
            }
            head = y->link;
            x->link = head;
            free(y);
        }
    }
 
 void del_at_pos()
    {
        if (head == NULL)
            printf("\n List is empty");
        else
        {
            int c = 1, pos;
            printf("\n Enter the position to be deleted:");
            scanf("%d", &pos);
            x = head;
            while (c < pos)
            {
                y = x;
                x = x->link;
                c++;
            }
            y->link = x->link;
            free(x);
        }
    }    

         

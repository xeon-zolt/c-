#include<iostream>
using namespace std;
struct node
{	int data;
	node *link;
}
class list
{	*start;
	public:
	list()
	{	start=NULL;
	}
	void insert_at_beg(int element)
	{	node *temp;
		temp=new node;
		temp->data=element;
		temp->link=NULL;
		if(start==NULL)
		start=temp;	
		else
		{	temp->link=start;
			start=start->link;
		}
	}
	void insert_at_end(int element)
	{	node *temp,*ptr;
		temp=new node;
		temp->data=element;
		temp->link=NULL;
		if(start==NULL)
		start=temp;
		
		else
		{	ptr=start;
			while(ptr->link!=NULL)
			ptr=ptr->link;
		}	
		ptr->link=temp;
	}
	void insert_at_mid(int element, int pos)
	{	node *temp,*ptr;
		temp=new node;
		temp->data=element;
		temp->link=NULL;
		if(start==NULL)
		start=temp;
		else
		{	ptr=start;
			while(ptr->data!=pos)
			ptr=ptr->link;
			if(ptr->link==NULL)
			cout<<"Element not found!";
			else
			{	node *ptr2;
				ptr2=ptr->link;
				ptr->link=temp;
				temp->link=ptr2;
			}
		}
	}
	int del_at_beg()
	{	if(start==NULL)
		{	cout<<"List Empty";	
			return 0;
		}
		else
		{	int elem;
			node *temp;
			temp=start;
			start->data=elem;
			start=start->link;	
			delete temp;
			cout<<"Deleted Element: "<<elem;
			return elem;			
		}
	}
	int del_at_end()
	{	if(start==NULL)
		{	cout<<"List Empty";
			return 0;
		}
		else
		{	int ele;
			node *ptr,temp;
			ptr=start;
			while(ptr->link->link!=NULL)
			ptr=ptr->link;
			temp=ptr->link;
			ptr->link=NULL;
			ele=temp->data;
			delete temp;
			cout<<"Deleted Element: "<<ele;
			return ele;
		}
	}
	int del_at_pos(int pos)
	{	if(start==NULL)
		{	cout<<"List Empty";
			return 0;
		}
		else
		{	int ele;
			node *ptr,temp;
			ptr=start;
			while(ptr->link->data!=pos)
			ptr=ptr->link;
			temp=ptr->link;
			ptr->link=temp->link;
			ele=temp->data;
			delete temp;
			cout<<"Deleted Element: "<<ele;
			return ele;
		}
	}			
void main()
{	list a;	
	do
}

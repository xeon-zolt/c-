/*
Name - Harsh
Roll No - 14CSU070
ABOUT - TREE
Date - 9-10-15
*/

#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root=NULL;

struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	{	
		root=(struct node *)malloc(sizeof(struct node));
		root->data=val;
		root->right=NULL;
		root->left=NULL;
	}
	else if(val>root->data)
	root->right=insert(root->right,val);
	else if(val<root->data)
	root->left=insert(root->left,val);
	else
	printf("\nDuplicacy is not allowed");
	return root;
}

struct node *smallest(struct node *root)
{
	if(root==NULL || root->left==NULL)
		return root;
	else 
		return smallest(root->left);
}

struct node *delete(struct node *root, int val)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(root==NULL)
	printf("\nValue does not exist in tree");
	else if(root->data > val)
	root->left = delete(root->left,val);
	else if(root->data < val)
	root->right = delete(root->right,val);
	else if(root->left!=NULL && root->right!=NULL)
	{
		temp=smallest(root->right);
		root->data=temp->data;
		root->right = delete(root->right,temp->data);
	}
	else
	{
		temp=root;
		if(root->left==NULL && root->right==NULL)
			root=NULL;
		else if(root->left!=NULL)
			root = root->left;
		else
			root = root->right;
		free(temp);
	}
	return root;
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{	
		printf("%d,",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d,",root->data);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d,",root->data);
		inorder(root->right);
	}
}
	
int main()
{
	int optn=0;
	while(optn!=6)
	{
		printf("\n\n1. Create Tree");
		printf("\n2. Preorder");
		printf("\n3. Postorder");
		printf("\n4. Inorder");
		printf("\n5. Delete");
		//printf("\n <under construction> display tree")
		printf("\n6. EXIT");
		printf("\nEnter your option : ");
		scanf("%d",&optn);
		
		switch(optn)
		{
			case 1:
			{
				int x=0;
				printf("\nEnter -1 to EXIT");
				printf("\nEnter the element : ");
					scanf("%d",&x);
				while(x!=-1)
				{
					root = insert(root,x);
					printf("Enter the element : ");
					scanf("%d",&x);
				}
				break;
			}
			case 2:
			{
				preorder(root);
				break;
			}
			
			case 3:
			{
				postorder(root);
				break;
			}
			case 4:
			{
				inorder(root);
				break;
			}
			case 5:
			{
				int num;
				printf("\nEnter the element to be deleted : ");
				scanf("%d",&num);
				root = delete(root,num);
				break;
			}
			case 6:
				break;
			default:
				printf("\nINVALID INPUT ");
		} 
	}
	return 0;
}

#include<iostream>
#include "stack.h"
using namespace std;
class BinarySearchTree
{
	public:
	int count;
		struct Node
		{
			int data;
			Node *left;
			Node *right;
		}*temp,*root;
		BinarySearchTree()
		{
			temp=NULL;
			root=NULL;
		count=0;
		}
		void insertBST();
		void rec_Preorder(Node *);
		void rec_Inorder(Node *);
		void rec_Postorder(Node *);
		void Iter_Preorder(Node *);
		void Iter_Inorder(Node *);
		void Iter_Postorder(Node *);
	
		
		
};
void BinarySearchTree::insertBST()
{
	if(root==NULL)
	{
		temp=new Node;
		cout<<"Enter data \n";
		cin>>temp->data;
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		count++;
	}
	else
	{
		Node *p1=root,*p;
		temp=new Node;
		cout<<"Enter data \n";
		cin>>temp->data;
		temp->left=NULL;
		temp->right=NULL;
		while(p1!=NULL)
		{
			if(temp->data<p1->data)
			{
				p=p1;
				p1=p1->left;
			}
			else
			{
			p=p1;
			p1=p1->right;
			}
		}
		if(temp->data<p->data)
		{
		p->left=temp;	
		count++;
		}
		else
		{
		p->right=temp;
		count++;
	}
	}
}
void BinarySearchTree::rec_Preorder(Node *temp)
{if(temp==NULL)
cout<<"SORRY! Your tree is EMPTY! RETRY..**\n";
else if(temp!=NULL)
{	cout<<temp->data<<"   ";
if(temp->left)
	rec_Preorder(temp->left);
if(temp->right)
	rec_Preorder(temp->right);
}
else
return;
}
void BinarySearchTree::rec_Inorder(Node *temp)
{
	if(temp==NULL)
	cout<<"SORRY! Your tree is EMPTY\n";
	else if(temp!=NULL)
	{
	if(temp->left)
	rec_Inorder(temp->left);
	cout<<temp->data<<"   ";
	if(temp->right)
	rec_Inorder(temp->right);
}
else
return;
}
void BinarySearchTree::rec_Postorder(Node *temp)
{
  if(temp==NULL)
  cout<<"SORRY! Your tree is empty \n";
  else if(temp!=NULL)
{ if(temp->left!=NULL)
  rec_postorder(temp->left);
  if(temp->right!=NULL)
  rec_postorder(temp->right);
  cout<<temp->data<<"  ";
}
else
return;
}
void BinarySearchTree::Iter_Preorder(Node *temp)
{  
stack<Node*> s1;
s1.push(temp);
while(s1.top!=-1)
{
	
	temp=s1.pop();
	cout<<temp->data<<" ";
	if(temp->right!=NULL)
	s1.push(temp->right);
	if(temp->left!=NULL)
	s1.push(temp->left);
}
cout<<endl;
}

int main()
{
	int exit;
	BinarySearchTree  obj;
	do{
		cout<<"Enter 1 to InserBST() function\n";
		cout<<"Enter 2 to rec_Preorder() function\n";
		cout<<"Enter 3 to rec_Inorder() function\n";
		cout<<"Enter 4 to rec_Postorder() function\n";
		cout<<"Enter 5 to iterative_preorder() function \n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				obj.insertBST();
				break;
			case 2:
				if(obj.root!=NULL)
				cout<<"PREORDER ELEMENTS ARE FOLLOWING..\n";
				obj.rec_Preorder(obj.root);
				cout<<endl;
				break;
			case 3:
				if(obj.root!=NULL)
				cout<<"INORDER ELEMENTS ARE FOLLOWING..\n";
				obj.rec_Inorder(obj.root);
				cout<<endl;
				break;
			case 4:
				if(obj.root!=NULL)
				cout<<"POSTORDER ELEMENTS ARE FOLLOWING..\n";
				obj.rec_Postorder(obj.root);
				cout<<endl;
				break;
			case 5:
				cout<<"Preorder elements are \n";
				obj.Iter_Preorder(obj.root);
				break;
				default:cout<<"WRONG CHOICE!\n";
			}
			cout<<"Enter 0 to exit and non-zero to continue\n";
			cin>>exit;
		}while(exit!=0);
		return 0;
	}
		

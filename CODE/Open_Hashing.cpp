#include<bits/stdc++.h>

using namespace std;

#define size 10

struct node{
	int data;
	struct node *next;
};

struct node *mainlink[size];

void initialize(){
	for(int i=0;i<size;i++)
	{
		mainlink[i] = NULL;
	}
}

void insert(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	int index = data%size;
	if(mainlink[index] == NULL)
		mainlink[index] = newnode;
	else
		{
			struct node *sublink = mainlink[index];
			while(sublink->next)
				sublink = sublink->next;
			sublink->next = newnode;
		}
}

void print(){
	for(int i=0;i<size;i++)
	{
		struct node *sublink = mainlink[i];
		printf("Mainlink[%d]-->",i);
		while(sublink)
		{
			printf("%d-->",sublink->data);
			sublink = sublink->next;
		}
		cout<<"NULL"<<endl;
	}
}
int main()
{
	initialize();
	insert(2);
	insert(3);
	insert(4);
	insert(7);
	insert(21);
	insert(1);
	insert(15);
	print();
	return 0;
}

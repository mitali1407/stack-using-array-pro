#include <windows.h>

//STACK USING ARRAY

#include <stdio.h>
#include <stdlib.h> 
void push();
void pop();
void display();

int top=-1;
int array[10];

int main()
{

int choice=1;
	while (choice==1 || choice==2 || choice==3)
		{
			printf(" \n Enter the no. of function to be performed \n 1.Push 2. Pop 3. Display 4.Exit \n");
			scanf("%d",&choice);
			if (choice==1)
			{
				push();
			}
			else if (choice==2)
			{
				pop();
			}
			else if (choice==3)
			{
				display();
			}
			else
			{
				break;
			}
		}
		
}
void push()
{
	int data;
	if (top==9)
	{
		printf("Overflow");
	}
	else
	{
		printf("Enter data : \n");
		scanf("%d",&data);
		top=top+1;
		array[top]=data;
		printf("\n The updated Array is \n");
		display();
	}
    	
}
void pop()
{
	if (top==-1)
	{
		printf("Underflow");
	}
	else
	{
	top=top-1;	
	}	
		
}
void display()
{
	if (top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		int i;
		for (i=0;i<=top;i++)
		{
			printf(" \n %d \n", array[top-i]);	
		}
	}
	
	
}

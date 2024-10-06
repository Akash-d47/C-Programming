#include<stdio.h>
void push();
int pop();
void traverse();
int stack[5];
top=-1;
int main()
{
	int choice;
	int top, stack[20];
	int num1=0, num2=0;
	while(1)
	{
		printf("Select a choice from the following: ");
		printf("\n[1] Push an element into the stack: ");
		printf("\n[2] Pop out an element from the stack: ");
		printf("\n[3] Display the stack elements: ");
		printf("\n[4] Exit\n");
		printf("\n\tYour choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				{
					printf("\n\tEnter the element to be pushed into the stack: ");
					scanf("%d", &num1);
					push (num1);
					break;
				}
			case 2:
			{
				num2=pop();
				printf("\n\t%d element popped out of the stack\n\t", num2);
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(1);
				break;
				}	
			default:
			printf("\n Invalid choice!");
			break;	
		}
	}
}
/*Push function*/
void push(int element)
{
	if(top==0)
	{
		printf("Stack is full!\n");
		exit(1);
	}
	top=top+1;
	stack[top]=element;
}
/*Pop function*/
int pop()
{
	int item;
	if(top==-1)
	printf("\n\tStack is Empty.\n ");
	else{item=stack[top];
	top=top-1;
	}
	
	
	return(stack[top--]);
	/*returning top element and decrementing the stack pointer*/
}

void display()
{
	int i;
	printf("\n\tThe various stack elements are: \n");
	for(i=top; i>=0;i--)
	printf("\t%d\n", stack[i]);
	
}
// Filename: \\PracticalList\P_19.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100 	// Shows maximum array length
int stack[MAX];   	// Declares array global variable
int top;			// Declares integer top
// Function prototypes of add stack, delete stack, and 
// show stack in array implementation
void push(int stack[], int val, int &top); // Add stack
int pop(int stack[], int &top); // Delete stack
void show_Stack(int stack[], int top); // Show stack
void main()
{
	int choice, val;
	char opt = 'Y';		// To continue the do loop in case
	top = -1;	// Initialization of Queue
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Stack";
		cout << "\n\t2. Deletion from Stack";
		cout << "\n\t3. Traverse of Stack";
		cout << "\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above -> ";
		cin >> choice;
		switch (choice)
		{
		   case 1:
			do
			{
				cout << "Enter the value to be added in the stack ";
				cin >> val;
				push(stack, val, top);
				cout << "\nDo you want to add more elements <Y/N> ? ";
				cin >> opt;
			} while (toupper(opt) == 'Y');
			break;
		   case 2:
			opt = 'Y'; // Initialize for the second loop
			do
			{
				val = pop(stack, top);
				if (val != -1)
				cout << "Value deleted from statck is " << val;
				cout << "\nDo you want to delete more elements <Y/N> ? ";
				cin >> opt;
			} while (toupper(opt) == 'Y');
			break;
		   case 3:
			show_Stack(stack, top);
			break;
		   case 4:
			exit(0);
		}
	}
	while (choice != 4);
}
// Function body for add stack with array
void push(int stack[], int val, int &top)
{
	if (top == MAX - 1)
	{
		cout << "Stack Full ";
	}
	else
	{
		top = top + 1;
		stack[top] = val;
	}
 }
// Function body for delete stack with array
int pop(int stack[], int &top)
{
	int value;
	if (top < 0)
	{
		cout << "Stack Empty ";
		value = -1;
	}
	else
	{
		value = stack[top];
		top = top - 1;
	}
	return (value);
}
// Function body for show stack with array
void show_Stack(int stack[], int top)
{
	int i;
	if (top < 0)
	{
		cout << "Stack Empty";
		return;
	}
	i = top;
	clrscr();
	cout << "The values are ";
	do
	{
		cout << "\n" << stack[i];
		i  = i - 1;
	}while(i >= 0);
}

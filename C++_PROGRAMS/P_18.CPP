// Filename: \\PracticalList\P_18.CPP
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include<constrea.h>
// Declares a stack structure
struct node
{
	int roll;
	int age;
	node *link;
};
// Function prototype declaration for add stack, delete stack, and show stack
node *push(node *top, int val, int tage); // Add stack
node *pop(node *top); // Delete stack
void show_Stack(node *top); // Show stack
// Main programming logic
void main()
{
	{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"                    WELCOME TO MANARTH PATEL'S PROGRAM \n";
		getch();
	}
	{
		constream cout;
		cout<<setclr(7);
	}
	node *top;
	int troll, tage, choice;
	char opt = 'Y';		// To continue the do loop in case
	top = NULL;		// Initialization of Stack
	clrscr();
	do
	{
		cout << "\n\t\t Main Menu";
		cout << "\n\t1. Addition of Stack";
		cout << "\n\t2. Deletion from Stack";
		cout << "\n\t3. Traverse of Stack";
		cout << "“\n\t4. Exit from Menu";
		cout << "\n\nEnter your choice from above ";
		cin >> choice;
		switch (choice)
		{
			case 1:
				do
				{
					cout << "Enter the roll no. : ";
					cin >> troll;
					cout << "Enter age : ";
					cin >> tage;
					top = push(top, troll, tage);
					cout << "\nDo you want to add more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 2:
				opt = 'Y'; // Initialize for the second loop
				do
				{
					top = pop(top);
					if (troll != -1)
						cout << "Value deleted from Stack is " << troll;
					cout << "\nDo you want to delete more elements <Y/N> ? ";
					cin >> opt;
				} while (toupper(opt) == 'Y');
				break;
			case 3:
				show_Stack(top);
				break;
			case 4:
				exit(0);
		}
	}
	while (choice != 4);
}
// Function body for adds stack elements
node *push(node *top, int val, int tage)
{
	node *temp;
	temp = new node;
	temp->roll = val;
	temp->age = tage;
	temp->link = NULL;
	if(top ==NULL)
		top = temp;
	else
	{
		temp->link = top;
		top = temp;
	}
	return(top);
}
// Function body for delete stack elements
node *pop(node *top)
{
	node *temp;
	int tage, troll;
	clrscr();
	if (top == NULL )
	{
		cout << "Stack Empty ";
		troll = -1;
	}
	else
	{
		temp = top;
		top = top->link;
		troll = temp->roll;
		tage = temp->age;
		temp->link = NULL;
		cout << "\n\tPopped Roll Number is : " << temp->roll;
		cout << "\n\tPopped Age is  : " << temp->age;
		delete temp;
	}
	return (top);
}
// Function body for show stack elements
void show_Stack(node *top)
{
	node *temp;
	temp = top;
	clrscr();
	cout << "The values are \n";
	while (temp != NULL)
	{
		cout << "\n" << temp->roll << "\t" << temp->age;
		temp = temp->link;
	}
}

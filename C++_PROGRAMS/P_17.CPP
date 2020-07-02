// Filename: \\PracticalList\P_17.CPP
		// This program illustrates the basic operation of add queue, delete queue and show queue
		// using linked list.
		#include <iostream.h>
		#include <stdio.h>
		#include <conio.h>
		#include <stdlib.h>
		#include <ctype.h>
		#include<constrea.h>
		// Declares a queue structure
		struct node
		{
			int Eno;
			float Salary;
			node *link;
		};
		// Functions prototype to  add queue, delete queue, and show queue
		node *add_Q(node *rear, int val,float val1);	// Add queue
		node *del_Q(node *front, int &val, float &val1);// Delete queue
		void show_Q(node *front);		// Show queue
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
			node *front, *rear;
			int val;
			float val1;
			int choice;
			char opt = 'Y';	// To continue the do loop in case
			front = rear = NULL;	// Initialization of Queue
			clrscr();
			do
			{
				cout << "\n\t\t Main Menu";
				cout << "\n\t1. Addition of Queue";
				cout << "\n\t2. Deletion from Queue";
				cout << "\n\t3. Traverse of Queue";
				cout << "\n\t4. Exit from Menu";
				cout << "\n\nEnter Your choice from above ";
				cin >> choice;
				switch (choice)
				{
					case 1:
						do
						{
							cout << "Enter the value to be added in the queue ";
							cin >> val;
							cin >> val1;
							rear = add_Q(rear, val,val1);
							if (front == NULL)
								front = rear;
							cout << "\nDo you want to add more element <Y/N>? ";
							cin >> opt;
						} while (toupper(opt) == 'Y');
						break;
					case 2:
						opt = 'Y';	// Initialize for the second loop
						do
						{
							front = del_Q(front, val, val1);
							if (front == NULL)
								rear = front;
							if (val != -1)
								cout << "Value deleted from Queue is " << val;
							cout << "\nDo you want to delete more element <Y/N>? ";
							cin >> opt;
						} while (toupper(opt) == 'Y');
						break;
					case 3:
						show_Q(front);
						break;
					case 4:
						exit(0);
				}
			}
			while (choice != 4);
		}
		// Function body to add queue elements
		node *add_Q(node *rear, int val, float val1)
		{
			node *temp;
			temp = new node;
			temp->Eno = val;
			temp->Salary = val1;
			temp->link = NULL;
			rear->link = temp;
			rear = temp;
			return (rear);
		}
		// Function body to delete queue elements
		node *del_Q(node *front, int &val, float &val1)
		{
			node *temp;
			clrscr();
			if (front == NULL)
			{
				cout << "Queue Empty ";
				val = -1;
			}
			else
			{
				temp = front;
				front = front->link;
				val = temp->Eno;
				val1 = temp->Salary;
				temp->link = NULL;
				delete temp;
			}
			return (front);
		}
		// Function body to show queue elements
		void show_Q(node *front)
		{
			node *temp;
			temp = front;
			clrscr();
			cout << "The Queue values are";
			while (temp != NULL)
			{
				cout <<"\nENO : "<< temp->Eno;
				cout <<"\nSalary : "<<temp->Salary;
				temp = temp->link;
			}
		}
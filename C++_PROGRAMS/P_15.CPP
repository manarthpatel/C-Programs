#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<constrea.h>
			class Clothing
			{
				char Code[15];
				char Type[15];
				int Size;
				char Material[20];
				float Price;
				public:
					// Constructor to assign initial values
					Clothing()
					{
						strcpy(Code, "NOT ASSIGNED");
						strcpy(Type, "NOT ASSIGNED");
						strcpy(Material, "NOT ASSIGNED");
						Size = 0;
						Price = 0;
					}
					// Function to calculate value
					void CalPrice()
					{
						if (strcmp(Material,"COTTON") == 0)
						{
							Price = 1500;
						}
						else
						if (strcmp(Material,"SHIRT") == 0)
						{
							Price = 1200 - (1200 * (25/100));
						}
					}
					// Function to input the values
					void Enter()
					{
						cout<<"Enter code : ";
						gets(Code);
						cout<<"Enter type : ";
						gets(Type);
						cout<<"Enter size : ";
						cin>>Size;
						cout<<"Enter Material : ";
						gets(Material);
						CalPrice();
					}
					// Function to display values
					void Show()
					{
						cout<<"Code : ";
						puts(Code);
						cout<<"Type : ";
						puts(Type);
						cout<<"Size : "<<Size<<endl;
						cout<<"Material : ";
						puts(Material);
						cout<<"Price : "<<Price;
					}
			};
			void main()
			{
	{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                      WELCOME TO MANARTH PATEL'S PROGRAM \n";
		getch();
	}
	{
		constream cout;
		cout<<setclr(7);
	}
				clrscr();
				Clothing C;
				C.Enter();
				C.Show();
			}
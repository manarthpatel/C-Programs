#include<iostream.h>
#include<constrea.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct world
{
	char country[30];
	char capital[30];
};
void main()
{       clrscr();
	{
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                               WELCOME TO THE PROGRAM \n";
		getch();
	}
	{constream cout;
		cout<<setclr(7);
	}
	clrscr();
	world w[10];
	int i=0,n;
	cout<<"Enter no. of records (<=10): ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter the country: ";
		gets(w[i].country);
		cout<<"\n";
		cout<<"Enter the capital: ";
		gets(w[i].capital);
		cout<<"\n";

	}
	char ch,*cont;
	int flag;

	cout<<"\n\t1.Search for capital\n\t2.List all Records\n\t3.Exit\n\t=>";
	cin>>ch;
	cout<<"\n";
	do
	{
		if(ch=='1')
		{
			cout<<"\nEnter the country : ";
			gets(cont);
			flag=0;
			for(i=0;i<n;i++)
			{
				if(strcmp(cont,w[i].country)==0)
				{
					cout<<"\ncapital is: "<<w[i].capital;
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<"\ncountry not found";
		}
		if(ch=='2')
		{
			cout<<"\n\n\t\tCOUNTRY\t\t\tCAPITAL";
			cout<<"\n\t\t-------\t\t\t-------";
			for(i=0;i<n;i++)
				cout<<"\n\t\t"<<(w[i].country)<<"\t\t\t"<<(w[i].capital);

		}


		cout<<"\n\n\t1.Search for capital\n\t2.List all Records\n\t3.Exit\n\t=>";
	cin>>ch;

	}while(ch!='3');

	getch();
}
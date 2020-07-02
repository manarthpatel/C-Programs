// Filename: \\PracticalList\P_2.CPP
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct world
{
	char country[30];
	char capital[30];
};
void main()
{
	clrscr();
	world w[10];
	int i=0,n;
	cout<<"Enter no. of records (<=10): ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the country: ";
		gets(w[i].country);
		cout<<"Enter the capital: ";
		gets(w[i].capital);

	}
	char ch,*cont;
	int flag;

	cout<<"\n\t1.Search for capital\n\t2.List all Records\n\t3.Exit";
	cin>>ch;
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
					cout<<"\n capital is: "<<w[i].capital;
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<"\ncountry not found";
		}
		if(ch=='2')
		{
			cout<<"\nCOUNTRY\t\tCAPITAL";
			cout<<"\n-------\t\t-------";
			for(i=0;i<n;i++)
				cout<<"\n"<<(w[i].country)<<"\t\t"<<(w[i].capital);

		}


		cout<<"\n\t1.Search for capital\n\t2.List all Records\n\t3.Exit";
	cin>>ch;

	}while(ch!='3');

	getch();
}
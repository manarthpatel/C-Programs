# include <fstream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<constrea.h>
class telephone
{
	char name[30];
	char address[50];
	int tno;
	public :
	void input()
	{
		cout<<"\n Enter the name ";
		gets(name);
		cout << "\n Enter address ";
		gets(address);
		cout<<"\n Enter the telephone number ";
		cin>>tno;
	}
	void show()
	{
		cout << "\n Name "<<name;
		cout << "\n Address "<<address;
	}
	int rt_tno()
	{
		return tno;
	}
}tele;

// Function to append the records in file
void append()
{
	ofstream  tfile;
	telephone tele;
	tfile.open("tele.dat", ios :: app);
	int  n,i;
	cout<< "Enter how many customers ";
	cin>>n;
	for (i=0;i<n;i++)
	{
		tele.input();
		tfile.write((char *)&tele,sizeof(tele));
	}
	tfile.close();
}
// Function to search a record in the file
void display()
{
	ifstream tfile;
	tfile.open("tele.dat",ios::in);
	int no,flag=0;
	cout<< "\n Enter telephone number to be searched:  ";
	cin>>no;
	while(tfile)
	{
		tfile.read((char*)&tele,sizeof(tele));
		if(!tfile)
			break;
		if (no==tele.rt_tno())
		{
			tele.show();
			flag=1;
			break;
		}
	}
	if (flag==0)
		cout<< "\n Record does not exist ";
}
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
	int ch;
	char ch1;
	do
	{
		cout <<"1.Append Record";
		cout <<"\n2.Searching Tool";
		cout <<"\n3.Exit";
		cout<<"\nEnter Your Choice: ";
		cin >> ch;
		switch (ch)
		{
			case 1:	append();
				break;
			case 2:	display();
				break;
			case 3 : exit(0);
		}
		cout<<"\n\t DO U want to continue aong with the program <Y/N>: ";
		cin>>ch1;
	}
	while(tolower(ch1)!='n');
}

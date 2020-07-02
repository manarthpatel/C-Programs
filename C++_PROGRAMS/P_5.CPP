#include<iostream.h>
#include<constrea.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
struct student
{
	char name[30];
	int roll;
	int mark1;
	int mark2;
	int mark3;
	int total;
}
st[100];
main()
{
{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                          WELCOME TO MY PROGRAM \n";
		getch();
	}
	{
		constream cout;
		cout<<setclr(7);
}

	int m,ch,l,p;
	char choice;
	do
	{
	clrscr();
	cout << "1. For enter "<<endl;
	cout << "2. For tabular report"<<endl;
	cout << "3. For Report card"<<endl;
	cout << "4. For exit\n=>";
	cin >> ch;
	switch(ch)
	{
		case 1:	cout << "Enter how many students\n=> ";
			cin >>m;
			for(l=0;l<m;l++)
			{
				cout << "Enter name =>";
				gets(st[l].name);
				cout << "Enter Roll Number =>";
				cin >>st[l].roll;
				cout << "Enter Mark1 =>";
				cin >>st[l].mark1;
				cout << "Enter Mark2 =>";
				cin >> st[l].mark2;
				cout << "Enter Mark3 =>";
				cin >> st[l].mark3;
				st[l].total = st[l].mark1+st[l].mark2+st[l].mark3;
			}

			break;
		case 2:
			student temp;
			for (l=0;l<m;l++)
			{
				for(p=l;p<m-1;p++)
				{
					if (st[p].total>st[p+1].total)
					{
						temp = st[p];
						st[p]=st[p+1];
						st[p+1]=temp;
					}
				}
			}
			gotoxy(6,6);
			cout <<"Name ";
			gotoxy(16,6);
			cout <<"Roll";
			gotoxy(26,6);
			cout <<"Mark1";
			gotoxy(36,6);
			cout <<"Mark2";
			gotoxy(46,6);
			cout <<"Mark3";
			gotoxy(56,6);
			cout <<"Total";
			int r = 8;
			for(l=0;l<m;l++)
			{
				gotoxy(6,r);
				cout <<st[l].name;
				gotoxy(16,r);
				cout <<st[l].roll;
				gotoxy(26,r);
				cout <<st[l].mark1;
				gotoxy(36,r);
				cout <<st[l].mark2;
				gotoxy(46,r);
				cout <<st[l].mark3;
				gotoxy(56,r);
				cout <<st[l].total;
				r++;
			}

			break;
		case 3:	int troll;
			cout << "\nEnter the roll number to be searched\n=> ";
			cin >> troll;
			for(l=0;l<m;l++)
			{
				if (st[l].roll==troll)
				{
					cout <<" \n Name"<<st[l].name;
					cout <<"\n Roll no."<< st[l].roll;
					cout <<"\n Mark1"<<st[l].mark1;
					cout <<"\n Mark2"<<st[l].mark2;
					cout <<"\n Mark3"<<st[l].mark3;
					cout <<"\n total"<<st[l].total;
				}
			}
			break;
		case 4:	exit(0);

	}
	cout << "\nDo U want to continue";
	cin>>choice;
	}
	while(choice=='Y'||choice =='y');
}

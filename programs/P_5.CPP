// Filename: \\PracticalList\P_5.CPP
#include<iostream.h>
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
}st[100];
main()
{
	int n,ch,i,j;
	char choice;
	do
	{
	clrscr();
	cout << "1. For enter "<<endl;
	cout << "2. For tabular report"<<endl;
	cout << "3. For Report card"<<endl;
	cout << "4. For exit";
	cin >> ch;
	switch(ch)
	{
		case 1:	cout << "Enter how many students ";
			cin >>n;
			for(i=0;i<n;i++)
			{
				cout << "Enter name ";
				gets(st[i].name);
				cout << "Enter Roll Number ";
				cin >>st[i].roll;
				cout << "Enter Mark1 ";
				cin >>st[i].mark1;
				cout << "Enter Mark2 ";
				cin >> st[i].mark2;
				cout << "Enter Mark3 ";
				cin >> st[i].mark3;
				st[i].total = st[i].mark1+st[i].mark2+st[i].mark3;
			}

			break;
		case 2:
			student temp;
			for (i=0;i<n;i++)
			{
				for(j=i;j<n-1;j++)
				{
					if (st[j].total>st[j+1].total)
					{
						temp = st[j];
						st[j]=st[j+1];
						st[j+1]=temp;
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
			for(i=0;i<n;i++)
			{
				gotoxy(6,r);
				cout <<st[i].name;
				gotoxy(16,r);
				cout <<st[i].roll;
				gotoxy(26,r);
				cout <<st[i].mark1;
				gotoxy(36,r);
				cout <<st[i].mark2;
				gotoxy(46,r);
				cout <<st[i].mark3;
				gotoxy(56,r);
				cout <<st[i].total;
				r++;
			}

			break;
		case 3:	int troll;
			cout << "\nEnter the roll number to be searched ";
			cin >> troll;
			for(i=0;i<n;i++)
			{
				if (st[i].roll == troll)
				{
					cout << " \n Name "<<st[i].name;
					cout << "\n Roll "<< st[i].roll;
					cout << "\n Mark1 "<<st[i].mark1;
					cout << "\n Mark2 "<<st[i].mark2;
					cout << "\n Mark3 "<<st[i].mark3;
					cout << "\n total "<<st[i].total;
				}
			}
			break;
		case 4:	exit(0);

	}
	cout << "\n Do U want to continue";
	cin>>choice;
	}while(choice == 'Y' ||choice =='y');
}

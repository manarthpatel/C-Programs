#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<constrea.h>
class employee
{
	int eno;
	char name[30];
	float salary;
	public :
	void input()
	{
		cout << "Enter Employee Number ";
		cin >>eno;
		cout << "Enter name ";
		gets(name);
		cout << "Enter salary ";
		cin >>salary;
	}
	void show()
	{
		cout<<"\t"<<eno<<setw(20)<<name<<setw(20)<<salary<<endl;
	}
	float rt_sal()
	{
		return salary;
	}
}emp[10];
main()
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

	int n,ch,i,j;
	char choice;
	do
	{
	clrscr();
	cout << "1. Data Entry "<<endl;
	cout << "2. Tabular Report"<<endl;
	cout << "3. Exit\n";
	cin >> ch;
	switch(ch)
	{
		case 1:	cout << "Enter how many employees ";
			cin >>n;
			for(i=0;i<n;i++)
			{
				emp[i].input();
			}

			break;
		case 2:
			employee temp;
			for (i=0;i<n;i++)
			{
				for(j=i;j<n-1;j++)
				{
					if (emp[j].rt_sal()>emp[j+1].rt_sal())
					{
						temp = emp[j];
						emp[j]=emp[j+1];
						emp[j+1]=temp;
					}
				}
			}
			gotoxy(6,6);
			cout <<"Employee Number ";
			gotoxy(26,6);
			cout <<"Name";
			gotoxy(46,6);
			cout <<"Salary"<<endl;
			int r = 8;
			for(i=0;i<n;i++)
			{
				emp[i].show();
				r++;
			}

			break;
		case 3:	exit(0);

	}
	cout << "\n\nDo U want to continue\n\t\t=>";
	cin>>choice;
	}
	while(choice == 'Y' ||choice =='y');
}

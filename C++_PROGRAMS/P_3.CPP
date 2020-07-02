#include<constrea.h>
#include<iostream.h>
#include<conio.h>
void twodigit(int p[10][10],int l,int m)
{
	int x,y,flag=0;
	cout<<"Two digit Numbers Are:";
	for(x=0;x<l;x++)
		for(y=0;y<m;y++)
		{
			if(p[x][y]>=10&&p[x][y]<=99)
			{
				cout<<p[x][y]<<ends;
				flag=1;
			}
		}
		if(flag==0)
			cout<<"None";
}
void main()
{
	{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                               WELCOME TO MY PROGRAM \n";
		getch();
	}
	{
		constream cout;
		cout<<setclr(7);
	}
	clrscr();
	int p[10][10],x,y,l,m;
	cout<<"\n EnterNo. of rows: ";
	cin>>l;
	cout<<"\nEnter the no. of columns: ";
	cin>>m;
	cout<<"\nEnter the Elements of the array: ";
	for(x=0;x<l;x++)
		for(y=0;y<m;y++)
			cin>>p[x][y];
	twodigit(p,l,m);


	getch();
}
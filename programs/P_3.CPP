// Filename: \\PracticalList\P_3.CPP
#include<iostream.h>
#include<conio.h>
void twodigit(int a[10][10],int m,int n)
{
	int i,j,flag=0;
	cout<<"The Two digit Numbers are: ";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=10&&a[i][j]<=99)
			{
				cout<<a[i][j]<<ends;
				flag=1;
			}

		}
		if(flag==0)
			cout<<"None";
}
void main()
{
	clrscr();
	int a[10][10],i,j,m,n;
	cout<<"\n EnterNo. of rows: ";
	cin>>m;
	cout<<"\nEnter the no. of columns: ";
	cin>>n;
	cout<<"\nEnter the Elements of the array: ";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	twodigit(a,m,n);
	getch();
}
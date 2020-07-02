// Filename: \\PracticalList\P_4.CPP
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	clrscr();
	char *name[50],*nm;
	int rno[50],m1[50],m2[50],m3[50],tot[50],i,n,trn;
	cout<<"Enter no. of records: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Name of Student "<<i<<": ";
		gets(name[i]);
		cout<<"Enter Roll No. of Student "<<i<<": ";
		cin>>rno[i];
		cout<<"Enter Mark1 of Student "<<i<<": ";
		cin>>(m1[i]);
		cout<<"Enter Mark2 of Student "<<i<<": ";
		cin>>(m2[i]);
		cout<<"Enter Mark3 of Student "<<i<<": ";
		cin>>(m3[i]);
		tot[i]=m1[i]+m2[i]+m3[i];
	}
	char ch,ch1;
	int flag=0;
	cout<<"\n\t1.Report card for particular student"
	"\n\t2.List all records\n\t3.Exit";
	cin>>ch;
	do
	{
		switch(ch)
		{
		case '1':
			cout<<"\nEnter the Roll no.";
			cin>>trn;
			flag=0;
			for(i=0;i<n;i++)
				if(trn==rno[i])
				{
					cout<<"\n Name: "<<name[i]<<"\t";
					cout<<"Roll No.: "<<rno[i];
					cout<<"\nMark1: "<<m1[i];
					cout<<"\nMark2: "<<m2[i];
					cout<<"\nMark3: "<<m3[i];
					cout<<"\n----------";
					cout<<"\nTotal: "<<tot[i];
					flag=1;

				}
				if(flag==0)
					cout<<"Record not found";
				break;
			case '2':
				cout<<"\nRollno\tName     \tMark1\tMark2\tMark3";
				cout<<"\tTotal";
				cout<<"\n------\t----------\t----\t----\t----";
				cout<<"\t-----";
				for(i=0;i<n;i++)
				{
				cout<<"\n"<<rno[i]<<"\t"<<name[i]<<"\t"
				<<m1[i]<<"\t"<<m2[i]<<"\t"<<m3[i]<<"\t"
				<<tot[i];
				}
				break;
			}
	cout<<"\n\t1.Report card for particular student"
	"\n\t2.List all records\n\t3.Exit";
	cin>>ch;


	}while(ch!='3');
	getch();
}
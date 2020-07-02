#include<constrea.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	{               clrscr();
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
	char *name[50],*nm;
	int RNO[50],M1[50],M2[50],M3[50],TOTAL[50],i,n,TRN;
	cout<<"Enter no. of records: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Name of Student "<<i+1<<": ";
		gets(name[i]);
		cout<<"Enter Roll No. of Student "<<i+1<<": ";
		cin>>RNO[i];
		cout<<"Enter Mark1 of Student "<<i+1<<": ";
		cin>>(M1[i]);
		cout<<"Enter Mark2 of Student "<<i+1<<": ";
		cin>>(M2[i]);
		cout<<"Enter Mark3 of Student "<<i+1<<": ";
		cin>>(M3[i]);
		TOTAL[i]=M1[i]+M2[i]+M3[i];
	}
	char ch,ch1;
	int flag=0;
	cout<<"\n\t1.Report card for particular student."
	"\n\t2.List all records.\n\t3.Exit program.\n";
	cin>>ch;
	do
	{
		switch(ch)
		{
		case '1':
			cout<<"\nEnter the Roll no.";
			cin>>TRN;
			flag=0;
			for(i=0;i<n;i++)
				if(TRN==RNO[i])
				{
					cout<<"\n Name: ";
					puts(name[i+1]);
					cout<<"\tRoll No.: "<<RNO[i];
					cout<<"\nMark1: "<<M1[i];
					cout<<"\nMark2: "<<M2[i];
					cout<<"\nMark3: "<<M3[i];
					cout<<"\n----------";
					cout<<"\nTotal: "<<TOTAL[i];
					flag=1;
				}
				if(flag==0)
					cout<<"Record not found";
				break;
			case '2':
				cout<<"\nRollno\tName     \tMark1\tMark2\tMark3";
				cout<<"\tTotal";
				cout<<"\n------\t---------\t-----\t-----\t-----";
				cout<<"\t-----";
				for(i=0;i<n;i++)
				{
				cout<<"\n"<<RNO[i]<<"\t";
				puts(name[i+1]);
				cout<<"\t"<<M1[i]<<"\t"<<M2[i]<<"\t"<<M3[i]<<"\t";
				cout<<TOTAL[i];
				}
				break;
			}
	cout<<"\n\t1.Report card for particular student."
	"\n\t2.List all records.\n\t3.Exit program.\n";
	cin>>ch;


	}while(ch!='3');
	getch();
}
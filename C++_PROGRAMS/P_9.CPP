#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<constrea.h>
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
	int n,j;
	fstream ofile,afile;
	char str[100];
	char ch,ch1;

	do
	{
		cout<<"\n\t1.Enter Text\n\t2.Show Text\n\t3.Exit\n";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("smp.txt",ios::out);
				cout<<"\nEnter The Text\n:\t";
				gets(str);
				ofile<<str;
				ofile.close();
				char tmp[20];
				afile.open("smp.txt",ios::in);
				ofile.open("vwl.txt",ios::out);
				while(!afile.eof())
				{
					afile.getline(tmp,20,' ');
					if(tmp[0]=='a'||tmp[0]=='e'||tmp[0]=='i'||tmp[0]=='o'||tmp[0]=='u')
					{
						ofile<<tmp;
						ofile<<' ';
					}
				}
				afile.close();
				ofile.close();

				break;
		     case '2' :	cout<<"\nFormatted text:\t";
				afile.open("vwl.txt",ios::in);
				while(afile)
				{
					afile.get(ch);
					cout<<ch;
				}
				afile.close();
				break;
		     case '3' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

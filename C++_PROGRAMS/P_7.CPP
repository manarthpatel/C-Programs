#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
#include<constrea.h>
class student
{
	char name[30];
	int rollno;
	int marks;
	public:
	void input()
	{
		cout<<"\nEnter Name: ";
		gets(name);
		cout<<"Enter Rollno.: ";
		cin>>rollno;
		cout<<"enter marks";
		cin>>marks;
	}
	void display()
	{

		cout<<name<<"\t"<<rollno<<"\t"<<marks<<"\t";
		if(marks>=96)
			cout<<"computer sc."<<endl;
		else if(marks>=91&&marks<=95)
			cout<<"Electronics"<<endl;
		else if(marks>=86&&marks<=90)
			cout<<"Mechanical"<<endl;
		else if(marks>=81&&marks<=85)
			cout<<"Electrical"<<endl;
		else if(marks>=76&&marks<=80)
			cout<<"Chemical"<<endl;
		else if(marks>=71&&marks<=75)
			cout<<"Civil"<<endl;
		else
			cout<<"Unknown Stream"<<endl;

	}

};
void main()
{
{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                   WELCOME TO MY PROGRAM \n";
		getch();
	}
	{
		constream cout;
		cout<<setclr(7);
}
	clrscr();
	student s;
	int n,i,j;
	fstream ofile,afile;

	char ch,ch1;

	do
	{
		cout<<"\n\t1.Add records\n\t2.Show Records\n\t3.Exit\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("st.dat",ios::app|ios::binary);
				cout<<"\nEnter no. of records to be Entered: ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					s.input();
					ofile.write((char*)&s,sizeof(student));
				}
				ofile.close();
				break;
		     case '2' :	cout<<"\nName\tRollno\tMarks\tStream\n";
				afile.open("st.dat",ios::in);
				while(afile)
				{
					afile.read((char *)&s,sizeof(student));
					if (!afile)
					break;
					s.display();
				}
				afile.close();
				break;
		     case '3' : exit(0);
		}
		cout<<"\n\t DO U want to continue <Y/N>: ";
		cin>>ch1;
	   }while(tolower(ch1)!='n');
	getch();
}

#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<constrea.h>
class donor
{
	char name[30];
	char address[30];
	char bgroup[5];
	public:
	void input()
	{
		cout<<"\nEnter Donor Name: ";
		gets(name);
		cout<<"Enter Address: ";
		gets(address);
		cout<<"Enter Blood Group: ";
		gets(bgroup);
	}
	void display()
	{
		cout<<"\n\tdonor Name: "<<name<<"\n\tAddress: "<<address<<"\n\tBlood Group: "<<bgroup;
		cout<<"\n_______________________________________________________________________________\n";
	}
	char *getbgroup()
	{
		return bgroup;
	}

};
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
	donor d;
	int n,i,j;
	fstream ofile,afile;

	char ch,ch1;

	do
	{
		cout<<"\n\t1.Add records\n\t2.Search Records\n\t3.List Records\n\t4.Exit\n\t";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("dnr.dat",ios::out|ios::binary);
				cout<<"\nEnter no. of records to be Entered: ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					d.input();
					ofile.write((char*)&d,sizeof(donor));
				}
				ofile.close();
				break;
		     case '2' :	cout<<"\nEnter Blood Group to be searched: ";
				char bg[5],flag=0;
				gets(bg);
				afile.open("dnr.dat",ios::in);
				while(afile)
				{
					afile.read((char *)&d,sizeof(donor));
					if(!afile)
						break;
					if (strcmp(bg,d.getbgroup())==0)
					{
						d.display();
						flag=1;

					}
				}
				if(flag==0)
					cout<<"\n No record Found";
				afile.close();
				break;
		      case '3' :
				afile.open("dnr.dat",ios::in);
				while(afile)
				{
					afile.read((char *)&d,sizeof(donor));
					if(!afile)
						break;
					d.display();
				}
				afile.close();
				break;


			   case '4' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

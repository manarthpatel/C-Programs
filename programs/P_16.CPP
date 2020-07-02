// Filename: \\PracticalList\P_16.CPP
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
class Sports{
	char sname[30];
	int sno;
	float fees;
	public:
	void input()
	{
		cout<<"\nEnter sports Name: ";
		gets(sname);
		cout<<"Enter sports No.: ";
		cin>>sno;
		cout<<"Enter Fees: ";
		cin>>fees;
	}
	void display()
	{
		cout<<"\nSports Name: "<<sname<<"\tSports No.: "<<sno<<"\tFees: "<<fees<<"\t";


	}
	int getsno()
	{
		return sno;
	}

};
void main()
{
	clrscr();
	Sports s;
	int n,i,j;
	fstream ofile,afile;

	char ch,ch1;

	do
	{
		cout<<"\n\t1.Add records\n\t2.Search Records\n\t3.Delete Records\n\t4.Exit\n";
		cout << "Enter your choice... ";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("Sport.dat",ios::out|ios::binary);
				cout<<"\nEnter no. of records to be Entered: ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					s.input();
					ofile.write((char*)&s,sizeof(Sports));
				}
				ofile.close();
				break;
		     case '2' :	cout<<"\nEnter Sports No. to be searched: ";
				int sn,flag=0;
				cin>>sn;
				afile.open("Sport.dat",ios::in);
				while(afile)
				{
					afile.read((char *)&s,sizeof(Sports));
					if(!afile)
						break;
cout << s.getsno();
					if (sn==s.getsno())
					{
						s.display();
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<"\n No record Found";
				afile.close();
				break;
		      case '3' :
				cout<<"\nEnter Sports No. to be Deleted ";
				int sn1,flag1=0;
				cin>>sn1;
				afile.open("Sport.dat",ios::in|ios::binary);
				ofile.open("TSport.dat",ios::out|ios::binary);
				while(afile)
				{
					afile.read((char *)&s,sizeof(Sports));
					if(!afile)
						break;
					if (sn1==s.getsno())
					{
						flag1=1;
					}
					else
					{
						ofile.write((char *)&s,sizeof(Sports));
					}

				}
				if(flag1==0)
					cout<<"\n No record Found";
				afile.close();
				ofile.close();

				afile.open("TSport.dat",ios::in|ios::binary);
				ofile.open("Sport.dat",ios::out|ios::binary);
				while(afile)
				{
					afile.read((char *)&s,sizeof(Sports));
					ofile.write((char *)&s,sizeof(Sports));

				}
				afile.close();
				ofile.close();

				break;


		     case '4' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

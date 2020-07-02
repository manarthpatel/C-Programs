// Filename: \\PracticalList\P_14.CPP
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
class book
{
	char bname[30];
	int bno;
	float price;
	public:
	void input()
	{
		cout<<"\nEnter Book Name: ";
		gets(bname);
		cout<<"Enter BOOK No.: ";
		cin>>bno;
		cout<<"Enter Price";
		cin>>price;
	}
	void setprice()
	{
		cout<<"\nEnter Price";
		cin>>price;
	}
	void display()
	{
		cout<<"\nBook Name: "<<bname<<"\tBook No.: "<<bno<<"\tPrice: "<<price<<"\t";


	}
	int getbno()
	{
		return bno;
	}

};
void main()
{
	clrscr();
	book b;
	int n,i,j;
	fstream ofile,afile;

	char ch,ch1;

	do
	{
		cout<<"\n\t1.Add records\n\t2.Search Records\n\t3.Modify Records\n\t4.Exit";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("bk.dat",ios::out|ios::binary);
				cout<<"\nEnter no. of records to be Entered: ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					b.input();
					ofile.write((char*)&b,sizeof(book));
				}
				ofile.close();
				break;
		     case '2' :	cout<<"\nEnter Book No. to be searched: ";
				int bn,flag=0;
				cin>>bn;
				afile.open("bk.dat",ios::in);
				while(afile)
				{
					afile.read((char *)&b,sizeof(book));
					if(!afile)
						break;
					if (bn==b.getbno())
					{
						b.display();
						flag=1;
						break;
					}
				}
				if(flag==0)
					cout<<"\n No record Found";
				afile.close();
				break;
		      case '3' :
				cout<<"\nEnter Book No. to be modified ";
				int bn1,flag1=0,r=0;
				cin>>bn1;
				afile.open("bk.dat",ios::in|ios::out|ios::binary);
				while(afile)
				{
					afile.read((char *)&b,sizeof(book));
					if(!afile)
						break;
					if (bn1==b.getbno())
					{
						b.setprice();
						afile.seekp(r*sizeof(b),ios::beg);
						afile.write((char *)&b,sizeof(book));
						flag1=1;
						break;
					}
					r++;
				}
				if(flag1==0)
					cout<<"\n No record Found";
				afile.close();
				break;


		     case '4' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

// Filename: \\PracticalList\P_10.CPP
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
void main()
{
	clrscr();
	int n,j;
	fstream ofile,afile;
	char str[100];
	char ch,ch1;

	do
	{
		cout<<"\n\t1.Create Text\n\t2.Count vowels/words/digits\n\t3.Show Text\n\t4.Exit";
		cin>>ch;
		switch(ch)
		{
		     case '1' :
				ofile.open("smp.txt",ios::out);
				cout<<"\n Enter The Text ";
				gets(str);
				ofile<<str;
				ofile.close();
				break;
		     case '2' :
				char tmp1;
				int v=0,d=0,w=0;
				afile.open("smp.txt",ios::in);
				while(!afile.eof())
				{
					afile.get(tmp1);

					if(tmp1=='a'||tmp1=='e'||tmp1=='i'||tmp1=='o'||tmp1=='u')
						v++;
					if(isdigit(tmp1))
						d++;
					if(tmp1==' '||tmp1=='.')
						w++;

				}
				afile.close();
				cout<<"\n No of Vowels: "<<v;
				cout<<"\n No of digits: "<<d+1;
				cout<<"\n No of words: "<<w;
				break;
		     case '3' :
				char tmp2;
				afile.open("smp.txt",ios::in);
				ofile.open("spl.txt",ios::out);
				while(!afile.eof())
				{
					afile.get(tmp2);
					if(tmp2==' ')
					{
						ofile<<'#';
					}
					else
					{
						ofile<<tmp2;
					}
				}
				afile.close();
				ofile.close();

				cout<<"\nFormatted text:\t";
				afile.open("spl.txt",ios::in);
				while(afile)
				{
					afile.get(ch);
					cout<<ch;
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

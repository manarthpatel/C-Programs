#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
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
		cout<<"\n\t1.Create Text\n\t2.Read from File\n\t3.create another file";
		cout << "\n\t4.Read from another file\n\t5.Exit\n\t=>";
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
				afile.open("smp.txt",ios::in);
				while(!afile.eof())
				{
					afile.get(tmp1);
					if(isalpha(tmp1))
					{
					   if (islower(tmp1))
					   {
					   if (tmp1=='a'||tmp1=='e'||tmp1=='i'||tmp1=='o'||tmp1=='u')
					   cout << "\n Lower case vowel "<<tmp1;
					   else
					   cout<<"\n Lower case consonants "<<tmp1;
					   }
					   if (isupper(tmp1))
					   {
					   if (tmp1=='A'||tmp1=='E'||tmp1=='I'||tmp1=='O'||tmp1=='U')
					   cout << "\n Upper case vowel "<<tmp1;
					   else
					   cout<<"\n Upper case consonants "<<tmp1;
					   }
					}

				}
				afile.close();
				break;
		     case '3' :	ofile.open("smp.txt",ios::in);
				afile.open("smp1.txt",ios::out);
				char c;
				while(ofile)
				{
					ofile.get(c);
					c = tolower(c);
					if (c=='a'||c=='i'||c=='e'||c=='o'||c=='u')
					afile.put(c);
				}
				ofile.close();
				afile.close();
				break;
		     case '4' : char tmp2;
				afile.open("smp1.txt",ios::in);
				while(!afile.eof())
				{
					afile.get(tmp2);
					if(isalpha(tmp2))
					{
					   if (islower(tmp2))
					   {
					   if (tmp2=='a'||tmp2=='e'||tmp2=='i'||tmp2=='o'||tmp2=='u')
					   cout << "\n Lower case vowel "<<tmp2;
					   else
					   cout<<"\n NOT FOUND!! "<<tmp2;
					   }
					   if (isupper(tmp1))
					   {
					   if (tmp2=='A'||tmp2=='E'||tmp2=='I'||tmp2=='O'||tmp2=='U')
					   cout << "\n Upper case vowel "<<tmp2;
					   else
					   cout<<"\n NOT FOUND!! "<<tmp2;
					   }
					}

				}
				afile.close();
				break;
		     case '5' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

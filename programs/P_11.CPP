// Filename: \\PracticalList\P_11.CPP
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
		cout<<"\n\t1.Create Text\n\t2.Read from File\n\t3.create another file";
		cout << "\n 4.Exit  ";
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
					   cout<<"\n Lower case consonants "<<tmp1;
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

		     case '4' : exit(0);
		}
		cout<<"\n\t DO U want to continue ";
		cin>>ch1;
	   }while(ch1=='Y'||ch1=='y');
	getch();
}

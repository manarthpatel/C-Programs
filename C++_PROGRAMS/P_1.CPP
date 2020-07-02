#include<constrea.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<constrea.h>
void findlength()
{
	char string[30];
	int length=0;
	cout<<"\n Enter the string. (size<=30)\n=> ";
	gets(string);
	while(string[length]!='\0')
	{
		length++;
	}
	cout<<"\n Length Of the given String is "<<length<<endl;
}
void compare()
{
	char string1[30], string2[30];
	int length1=0,length2=0,i=0,flag=0;
	cout<<"\n Enter the string 1. (size<=30)\n=>";
	gets(string1);
	while(string1[length1]!='\0')
	{
		length1++;
	}
	cout<<"\n Enter the string 2. (size<=30)\n=>";
	gets(string2);
	while(string2[length2]!='\0')
	{
		length2++;
	}
	if(length2!=length1)
	{
		cout<<"\n Strings are not Equal.\n ";
	}
	else
	{
		for(i=0;i<length1;i++)
		{
		    if(string1[i]!=string2[i])
		    {
			flag=1;
			break;
		    }
		}
		if(flag==1)
		{
			cout<<"\n Strings are not Equal.\n ";
		}
		else
		{
			cout<<"\n Strings are Equal.\n ";
		}
	}
}
void Concatenate()
{
	char string1[30], string2[30];
	int length1=0,length2=0,i=0,flag=0;
	cout<<"\n Enter the string 1. (size<=30)\n=>";
	gets(string1);
	while(string1[length1]!='\0')
	{
		length1++;
	}
	cout<<"\n Enter the string 2. (size<=30)\n=>";
	gets(string2);
	while(string2[length2]!='\0')
	{
		length2++;
	}
	for(i=0;i<length2;i++)
	{
		string1[length1+i]=string2[i];
	}
	string1[length1+length2]='\0';
	cout<<"\n The concatenated String is ";
	puts(string1);

}
void main()
{
	{
		clrscr();
		constream cout;
		cout<<setclr(3);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n                      WELCOME TO MANARTH PATEL'S PROGRAM \n";
		getch();
	}
		{
			constream cout;
			cout<<setclr(7);
		}
	clrscr();
	cout<<"\nENTER YOUR CHOICE \n\t1.Find the length of the string.\n\t"
	      "2.Compare two strings.\n\t3.Concatenate the two strings.\n\t4.Exit program"<<endl;
	char ch;
	cin>>ch;
	do
	{
		if(ch=='1')
			findlength();
		if(ch=='2')
			compare();
		if(ch=='3')
			Concatenate();
			cout<<"\nENTER YOUR CHOICE \n\t1.Find the length of the string.\n\t"
			      "2.Compare two strings.\n\t3.Concatenate the two strings.\n\t4.Exit program"<<endl;
	cin>>ch;
	}
	while(ch!='4');
	getch();
}
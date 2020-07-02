// Filename: \\PracticalList\P_1.CPP
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void findlength()
{
	char str[30];
	int l=0;
	cout<<"\n Enter the string (size<=30) ";
	gets(str);
	while(str[l]!='\0')
	{
		l++;
	}
	cout<<"\n Length Of the given String is: "<<l<<endl;
}
void compare()
{
	char str1[30], str2[30];
	int l1=0,l2=0,i=0,flag=0;
	cout<<"\n Enter the string1 (size<=30) ";
	gets(str1);
	while(str1[l1]!='\0')
	{
		l1++;
	}
	cout<<"\n Enter the string2 (size<=30) ";
	gets(str2);
	while(str2[l2]!='\0')
	{
		l2++;
	}
	if(l2!=l1)
	{
		cout<<"\n Strings are not Equal ";
	}
	else
	{
		for(i=0;i<l1;i++)
		{
		    if(str1[i]!=str2[i])
		    {
			flag=1;
			break;
		    }
		}
		if(flag==1)
		{

			cout<<"\n Strings are not Equal ";
		}
		else
		{
			cout<<"\n Strings are Equal ";
		}
	}


}

void concat()
{
	char str1[30], str2[30];
	int l1=0,l2=0,i=0,flag=0;
	cout<<"\n Enter the string1 (size<=30) ";
	gets(str1);
	while(str1[l1]!='\0')
	{
		l1++;
	}
	cout<<"\n Enter the string2 (size<=30) ";
	gets(str2);
	while(str2[l2]!='\0')
	{
		l2++;
	}
	for(i=0;i<l2;i++)
	{
		str1[l1+i]=str2[i];
	}
	str1[l1+l2]='\0';
	cout<<"\n The concatenated String is: ";
	puts(str1);

}


void main()
{
	clrscr();
	cout<<"Enter your choice \n \t1.Find length of string\n\t"
	"2.Compare two Strings \n\t3.Concatenate two strings\n\t4.Exit \n";
	char ch;
	cin>>ch;
	do
	{
		if(ch=='1')
			findlength();
		if(ch=='2')
			compare();
		if(ch=='3')
			concat();
		cout<<"Enter your choice \n \t1.Find length of string\n\t"
	"2.Compare two Strings \n\t3.Concatenate two strings\n\t4.Exit \n";
	cin>>ch;

	}while(ch!='4');
	getch();
}

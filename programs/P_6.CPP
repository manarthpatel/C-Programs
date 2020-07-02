// Filename: \\PracticalList\P_6.CPP
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],n,i,j,temp;
	char ch;

	do
	{
		cout<<"\n\t1.Enter Array\n\t2.Sort Array\n\t3.Search\n\t4.Display\n\t5.Exit";
		cin>>ch;
		switch(ch)
		{
			case   '1':
				cout<<"\nEnter no. of Elements (<=20): ";
				cin>>n;
				for(i=0;i<n;i++)
					cin>>a[i];
				break;
			case   '2':
				cout<<"\nThe Array is Now Sorted";
				for(i=0;i<n;i++)
					for(j=0;j<n-1;j++)
						if(a[j]>a[j+1])
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
				break;

			case   '3':
				cout<<"\nThe element to be searched";
				int el;
				cin>>el;
				int first=0,last=n-1,mid=0,flag=0;
				while(first<=last&&flag==0)
				{
					mid=(first+last)/2;
					if(a[mid]==el)
					{
						flag=mid;
					}
					else if(a[mid]<el)
					{
						first=mid+1;
					}
					else
					{
						last=mid-1;
					}

				}
				if(flag>0)
					cout<<"\nThe Element is Found at: "<<++flag<<" in the sorted array";
				else
					cout<<"\n No such Element";
				break;
			case '4':
				cout<<"\n";
				for(i=0;i<n;i++)
					cout<<a[i]<<ends;



		}

	}while(ch!='5');
}
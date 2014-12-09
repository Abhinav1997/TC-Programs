#include<iostream.h>
#include<conio.h>

static void pattern(int);

void main()
{
clrscr();
int k;
cout<<"--------------------------------PATTERN MAKER------------------------------\n\n\n";
cout<<"How big pattern you want? (Enter a number) - ";
cin>>k;
cout<<"\nOutput -"<<endl;
pattern(k);
getch();
}

static void pattern(int m)
{
char ar[100][100];
cout<<"\n";
for(int i=0;i<m;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i>=j)
		ar[i][j]='*';
	}
}
for(i=0;i<m;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i>=j)
		cout<<ar[i][j]<<" ";
		else
		cout<<" ";
	}
	cout<<"\n";
}
}
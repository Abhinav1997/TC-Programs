#include<iostream.h>
#include<conio.h>

static void oddeven(char ar[][100],int ,int );

void main()
{
clrscr();
int r,c;
char ar[100][100];
cout<<"--------------------------------ODD-EVEN------------------------------\n\n\n";
cout<<"Enter the number of rows you want in your 2D array - ";
cin>>r;
cout<<"Enter the number of columns you want in your 2D array - ";
cin>>c;
cout<<"Enter "<<c*r<<" values in array- "<<endl;
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	cin>>ar[i][j];
}
cout<<"\nOutput -"<<endl;
oddeven(ar,r,c);
getch();
}

static void oddeven(char ar[][100],int m,int n)
{
cout<<"\nThe even elements of this array are-"<<endl;
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		if(ar[i][j]%2==0)
		cout<<ar[i][j]<<" ";
	}
}
cout<<"\nThe odd elements of this array are-"<<endl;
for(i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		if(ar[i][j]%2!=0)
		cout<<ar[i][j]<<" ";
	}
}
}
#include<iostream.h>
#include<conio.h>

static void triangles(char ar[][100], int);

void main()
{
clrscr();
int m;
char ar[100][100];
cout<<"--------------------------------TRIANGLES------------------------------\n\n\n";
cout<<"Enter the number of rows/columns you want in your 2D array - ";
cin>>m;
cout<<"Enter "<<m*m<<" values in array- "<<endl;
for(int i=0;i<m;i++)
{
	for(int j=0;j<m;j++)
	cin>>ar[i][j];
}
cout<<"\nOutput -"<<endl;
triangles(ar,m);
getch();
}

static void triangles(char ar[][100],int n)
{
cout<<"\nLower left triangle-"<<endl;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i>=j)
		cout<<ar[i][j]<<" ";
		else
		cout<<"  ";
	}
	cout<<"\n";
}

cout<<"\nLower right triangle-"<<endl;
for(i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i+j>=(n-1))
		cout<<ar[i][j]<<" ";
		else
		cout<<"  ";
	}
	cout<<"\n";
}

cout<<"\nUpper left triangle-"<<endl;
for(i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(i+j<=(n-1))
		cout<<ar[i][j]<<" ";
		else
		cout<<"  ";
	}
	cout<<"\n";
}

cout<<"\nUpper right triangle-"<<endl;
for(i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(j>=i)
		cout<<ar[i][j]<<" ";
		else
		cout<<"  ";
	}
	cout<<"\n";
}
}
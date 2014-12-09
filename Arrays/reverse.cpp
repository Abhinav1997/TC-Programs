#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

static void reversify(char * ar);

void main()
{
clrscr();
char ar[256];
cout<<"--------------------------------REVERSIFIER------------------------------\n\n\n";
cout<<"Enter sentence -"<<endl;
gets(ar);
cout<<"\nOutput -"<<endl;
reversify(ar);
getch();
}

static void reversify(char * ar)
{
int i=strlen(ar)-1,keep,end='\0';
	while(i>=0)
	{
		while(i>=0 && ar[i]!=' ')
			i--;
			keep=i-1;
			i++;
		while(ar[i]!=end)
		{
			cout<<ar[i];
			i++;
		}
		end=' ';
		i=keep;
		if(i>0)
		cout<<" ";
	}
}
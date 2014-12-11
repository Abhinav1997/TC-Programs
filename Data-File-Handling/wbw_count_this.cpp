#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void count_this()
{
char data[50];
int c_this=0;
ifstream fin;
fin.open("Sample");
while(1)
{
    fin>>data;
        if(fin.eof())
            break;
        if(strcmpi(data,"this")==0)
            c_this++;
}
fin.close();
cout<<"\nNo. of this- "<<c_this;
}

void main()
{
clrscr();
cout<<"-------------------THIS COUNTER-------------------\n\n\n";
count_this();
}
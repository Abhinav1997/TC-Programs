#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>

void count_alpha()
{
char ch;
int c_alpha=0;
ifstream fin;
fin.open("Sample");
while(!fin.eof())
{
    fin.get(ch);
    if(isalpha(ch))
        c_alpha++;
}
fin.close();
cout<<"\nNo. of alphabets- "<<c_alpha;
}

void main()
{
clrscr();
cout<<"-------------------ALPHABET COUNTER-------------------\n\n\n";
count_alpha();
}
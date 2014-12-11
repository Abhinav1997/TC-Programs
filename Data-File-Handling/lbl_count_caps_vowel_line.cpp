#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void count_vowel_line()
{
char line[50];
int c_vowel_line=0;
ifstream fin;
fin.open("Sample");
while(!fin.eof())
{
    fin.getline(line,10);
        if(line[0]=='A'||line[0]=='E'||line[0]=='I'||line[0]=='O'||line[0]=='U')
            c_vowel_line++;
}
fin.close();
cout<<"\nNo. of capital vowels- "<<c_vowel_line;
}

void main()
{
clrscr();
cout<<"-------------------CAPITAL VOWEL COUNTER-------------------\n\n\n";
count_vowel_line();
}
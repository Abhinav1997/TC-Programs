#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void count_vowel()
{
char data[50];
int c_vowel=0;
ifstream fin;
fin.open("Sample");
while(!fin.eof())
{
    fin>>data;
        if(data[0]=='a'||data[0]=='e'||data[0]=='i'||data[0]=='o'||data[0]=='u')
            c_vowel++;
}
fin.close();
cout<<"\nNo. of small vowels- "<<c_vowel;
}

void main()
{
clrscr();
cout<<"-------------------SMALL VOWEL COUNTER-------------------\n\n\n";
count_vowel();
}
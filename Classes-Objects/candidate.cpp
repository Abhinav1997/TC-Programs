#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class Candidate
{
int rno;
char name[30];
float score;
char remarks[50];
void AssignRem()
{
	if(score>=50)
		strcpy(remarks,"Selected");
	else
		strcpy(remarks,"Not Selected");
}
public:
void ENTER()
{
	cout<<"\nEnter Registration No. - ";
	cin>>rno;
	cout<<"Enter name - ";
	gets(name);
	cout<<"Enter score - ";
	cin>>score;
	AssignRem();
}
void DISPLAY()
{
	cout<<"\nDetails - \n"<<"\nRegistration no. - "<<rno;
	cout<<"\nName - ";
	puts(name);
	cout<<"Score - "<<score;
	cout<<"\nRemarks - ";
	puts(remarks);
}
};

void main()
{
clrscr();
Candidate c;
cout<<"------------------Candidate Selection-----------------\n\n\n";
	c.ENTER();
	c.DISPLAY();
getch();
}
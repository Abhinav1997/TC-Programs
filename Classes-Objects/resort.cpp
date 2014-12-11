#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class RESORT
{
int rno,days;
char name[30];
float charges;
float COMPUTE();
public:
void Getinfo();
void Dispinfo();
};

float RESORT::COMPUTE()
{
	float amount=charges*days;
	if(amount>11000)
		amount=1.02*days*charges;
	return amount;
}
void RESORT::Getinfo()
{
	cout<<"\nEnter Resort No. - ";
	cin>>rno;
	cout<<"Enter Resort name - ";
	gets(name);
	cout<<"Enter charges - ";
	cin>>charges;
	cout<<"Enter days - ";
	cin>>days;
}
void RESORT::Dispinfo()
{
	cout<<"\nDetails - \n"<<"\nResort no. - "<<rno;
	cout<<"\nResort Name - ";
	puts(name);
	cout<<"Charges - "<<charges<<"\nDays- "<<days;
	cout<<"\nTotal Amount - ";
	cout<<COMPUTE();
}

void main()
{
clrscr();
RESORT r;
cout<<"------------------Resort amount calc.-----------------\n\n\n";
	r.Getinfo();
	r.Dispinfo();
getch();
}
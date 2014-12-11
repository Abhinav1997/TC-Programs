#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class STOCK
{
int ICode,Qty;
char Item[30];
float Price,Discount;
void FindDisc()
{
	if(Qty<=50)
		Discount=0;
	else if(Qty<=100)
		Discount=5;
	else
		Discount=10;
}
public:
void Buy()
{
	cout<<"\nEnter Item Code - ";
	cin>>ICode;
	cout<<"Enter item name - ";
	gets(Item);
	cout<<"Enter price of each item - ";
	cin>>Price;
	cout<<"Enter quantity of item  in stock- ";
	cin>>Qty;
	FindDisc();
}
void ShowAll()
{
	cout<<"\nDetails - \n"<<"\nCode - "<<ICode;
	cout<<"\nName - ";
	puts(Item);
	cout<<"Price - "<<Price;
	cout<<"\nQuantity - "<<Qty;
	cout<<"\nDiscount percentage - "<<Discount<<"%";
	cout<<"\nFinal price - "<<Qty*(Price-((Discount/100)*Price));
}
};

void main()
{
clrscr();
STOCK s;
cout<<"------------------Discount Calculator-----------------\n\n\n";
	s.Buy();
	s.ShowAll();
getch();
}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Flight
{
int flightno;
char destination[30];
float distance,fuel;
void calc_fuel()
{
	if(distance<=1000)
		fuel=500;
	else if(distance>1000 && distance<=2000)
		fuel=1100;
	else if(distance>2000)
		fuel=2200;
}
public:
void feed_info()
{
	cout<<"\nEnter flight no. - ";
	cin>>flightno;
	cout<<"Enter destination - ";
	gets(destination);
	cout<<"Enter distance - ";
	cin>>distance;
	calc_fuel();
}
void show_fuel()
{
	cout<<"\nDetails - \n"<<"\nFlight no. - "<<flightno;
	cout<<"\nDestination- ";
	puts(destination);
	cout<<"Distance - "<<distance;
	cout<<"\nFuel - "<<fuel;
}
};

void main()
{
clrscr();
Flight f;
cout<<"------------------FLIGHT FUEL CALCULATOR-----------------\n\n\n";
	f.feed_info();
	f.show_fuel();
getch();
}
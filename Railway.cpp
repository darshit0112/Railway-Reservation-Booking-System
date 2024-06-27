#include<iostream>
#include<conio.h>
#include<sstream>
using namespace std;

class detaile
{
	public:
		get_detailes()
		{
			
			char ch='=';
			char cha ='-';
			cout.fill('=');
			cout.width(80);
			cout<<ch<<"\n";
	
			cout<<"		   ^Welcome Railway Reservation Booking System^				      ";
	  
			cout.fill('-');					//railway`s detailes
			cout.width(50);
			cout<<cha<<"\n";
			
			cout<<"\n \nRailway Train Name :- 19565 Okha Dehradun Expraction"<<endl;
			cout<<"Railway From Where To Where :- Jamnagar To Haridwar"<<endl;
			cout<<"Haridwar From Jamnagar Date:- 7/12/2023 To 10/12/2023"<<endl;
			cout<<"Railway Time :- 8:14PM - 7:45AM (Thursday)"<<endl;
			cout<<"Jamnagar To Haridwar Distance :- 1158 KM"<<endl;1
			cout<<"Jamangar To Haridwar Days :- 1 Day 3 Hrs 32 Mins"<<endl;
		}
		
};


class coach : public detaile
{
	public:
		
		int get_dabba()
		{
			
			int coach;
			int a;
			
			cout<<"\n Enter your coach Number : ";
			cin>>coach;
									//14 dabba che ke nahi ana mate
			if(coach <= 14)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			cout<<endl<<endl;
		}
};

			
			


class new_sit : public coach
{
	
	public:
		int seet,pay;
		char status,choice,name[50],email[50];
			
		
	
	get_newsit()
	{
		
				cout<<endl;
				cout<<"1. AC Seats \n"<<endl;				//normal seat mate ane Ac seats mate
				cout<<"Total Seats :- 200 Seats"<<endl;
				cout<<"125 Seats Is Empty"<<endl;
			
				cout<<"choice Your Seats :";
				cin>>choice;
		
		
			
			cout<<"Available Seats :- G,H,I,J"<<endl;
			cin>>status;
		
		switch(status)
		{
		
			case 'g':
				
					cout<<"--------------------------------------------------------------------------------";
					cout<<"			 Welcomr To Ac Seats G Series						\n"<<endl;
				
					cout<<"1 Coach = 40 Seats "<<endl;
					cout<<"30G Seats alrady Booking "<<endl;
					cout<<"available Seats :- 31G,,32G,33G,34G,35G,36G,37G,38G,39G,40G"<<endl;				
					cout<<"Enter your seats : ";
					cin>>seet;
					if(seet > 30 && seet < 41)
					{
						cout<<" This Seat Is Available"<<endl;
					}
					else
					{
						cout<<"This Seat Is Not Available"<<endl;
					}	
						break;
		
			
			case 'h':
			
					cout<<"--------------------------------------------------------------------------------";
					cout<<"			 Welcomr To Ac Seats H Series						\n"<<endl;
						
					cout<<"1 Coach = 40 Seats "<<endl;
					cout<<"36H Seats alrady Booking "<<endl;
					cout<<"available Seats :- 37H,38H,39H,40H"<<endl;				
					cout<<"Enter your seats : ";
					cin>>seet;
					if(seet > 37 && seet < 41)
					{
						cout<<" This Seat Is Available"<<endl;
					}
					else
					{
						cout<<"This Seat Is Not Available"<<endl;
					}	
						break;
				
				
			case 'i':
			
					cout<<"--------------------------------------------------------------------------------";
					cout<<"			 Welcomr To Ac Seats I Series						\n"<<endl;
				
					cout<<"1 Coach = 40 Seats "<<endl;
					cout<<"34I Seats alrady Booking "<<endl;
					cout<<"available Seats :- 35I,36I,37I,38I,39I,40I"<<endl;				
					cout<<"Enter your seats : ";
					cin>>seet;
					if(seet > 34 && seet < 41)
					{
						cout<<" This Seat Is Available"<<endl;
					}
					else
					{
						cout<<"This Seat Is Not Available"<<endl;
					}	
						break;
					
					
			case 'j':
			
					cout<<"--------------------------------------------------------------------------------";
					cout<<"			 Welcomr To Ac Seats J Series						\n"<<endl;
				
					cout<<"1 Coach = 40 Seats "<<endl;
					cout<<"30G Seats alrady Booking "<<endl;
					cout<<"available Seats :- 31J,,32J,33J,34J,35J,36J,37J,38J,39J,40J"<<endl;				
					cout<<"Enter your seats : ";
					cin>>seet;
					if(seet > 30 && seet < 41)
					{
						cout<<" This Seat Is Available"<<endl;
					}
					else
					{
						cout<<"This Seat Is Not Available"<<endl;
					}	
		
						break;				
								
		}
			
	}
	
};
	
	
class pays : public new_sit
{
	public:
		
		int pay;
		char name[50],email[50];
		get_payment()
		{
			
			if(pay = 1)
			{
				
					cout<<"\n-------------------------------Payment----------------------------------------\n";
						
 						
						
						cout<<"\none parson amounrt = 530 RPS/-\n";
						
						cout<<"\n^^ your ticket booking sucessfuly ^^";
						
			}
						
		}
};




int main()
{
	int b,a,c;
	int bol;
	
	
					//class`s objects
	
	detaile d;
	new_sit s1;
	pays m;
					//call this function
	
	b = d.get_detailes();
	s1.get_dabba();
	m.get_newsit();
	m.get_payment();				
		
	return 0;
}
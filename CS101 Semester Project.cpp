#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;

void info_check();
void buy_ticket1();
void buy_ticket2();

void info_check(){
	
	string flag1;
	cout <<endl<<endl<< "\t\t\t\t Have you registered for an account yet ??" << endl;
	cout <<endl<< "\t\t\t\t (Yes/No) : ";
	getline(cin, flag1);
	cout<<endl;
	
	if(flag1=="Yes"||flag1=="yes"||flag1=="YES"){
		
		string flag2;
		cout<<"\t\t\t\t Have you signed in ??"<< endl <<endl;
		cout<<"\t\t\t\t (Yes/No) : ";
		getline(cin, flag2);
		cout<<endl;
		
		if(flag2=="Yes"||flag2=="yes"||flag2=="YES"){
			
			string name;
			cout<<"\t\t\t\t Enter your user name : ";
			getline(cin,name);				//call aleena file and match
			cout<<endl;
			
		/*	if (name != file name){
				
				cout<<"you need to register or sign up before proceeding !"<<endl;
				cout<<"Press any key to conyinue :"<<endl;
				getch();
			}
			else if (name == file name){}*/
				
				buy_ticket1();				//call function
			
		}
		else if(flag2=="NO"||flag2=="No"||flag2=="no"){
			
			cout<<"\t\t\t\t Please sign in before buying ticket !"<<endl;
			cout<<"\t\t\t\t Press any key to continue : "<<endl;
			getch();
			//call main function
		}
	}
	else if(flag1=="NO"||flag1=="No"||flag1=="no"){
		
		cout<<"\t\t\t\t Please register before buying ticket !"<<endl;
		cout<<"\t\t\t\t Press any key to continue : "<<endl;
		getch();
		//call main function
	}
}
void buy_ticket1(){
	
		//ask for prefered movie and call areej function
		
		int tickets, choice1;
		cout<<"\t\t\t\t Enter number of ticket you would like to purchase : ";
		cin>>tickets;
		system("cls");
		cout<<"\t\t\t\t\t\t Seating Arrangement"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t      1  2  3  4  5  6  7  8  9  10"<<endl;
		cout<<"\t\t\t\t\t A    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t B    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t C    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t D    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t E    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t F    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t G    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t H    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t I    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<"\t\t\t\t\t J    __ __ __ __ __ __ __ __ __ __"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t      _____________"<<endl;
		cout<<"\t\t\t\t\t\t\t Screen"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t We have seats available in :"<<endl<<endl;
		cout<<"\t\t\t\t  1. Silver	 (Row F, G, H, I and J)	  = Rs 800"<<endl;
		cout<<"\t\t\t\t  2. Gold 	 (Row C, D and E)	  = Rs 1000"<<endl;
		cout<<"\t\t\t\t  3. Platinum 	 (Row A and B)		  = Rs 1500"<<endl<<endl;
		cout<<"\t\t\t\t Choose your preference (1-3) : ";
		cin>>choice1;
		system("cls");
		switch(choice1){
		
			case 1 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*800<<endl;
				break ;
				
			case 2 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*1000<<endl;
				break ;
				
			case 3 :
				cout<<endl<<endl<<"\t\t\t\t Your Total amount is : "<<tickets*1500<<endl;
				break ;
				
			default :
				cout<<"\t\t\t\t Invalid choice"<<endl;
				cout<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket1();
				break;//use while instead
				
	}	
}
void buy_ticket2(){
	
	int flag3, choice2;
	double card_mob_num;
	cout<<endl<<"\t\t\t\t Would you like to add a deal with your ticket ?"<<endl;
	cout<<endl<<"\t\t\t\t If yes then press 1 and if not then press 0 : ";
	cin >> flag3;
	if(flag3==1){
		//areej deal function then add to total
	}
	cout<<endl<<"\t\t\t\t Prefered payment method : "<<endl<<endl;
	cout<<"\t\t\t\t 1. Easypaisa"<<endl;
	cout<<"\t\t\t\t 2. Bank Transfer"<<endl;
	cout<<"\t\t\t\t 3. Pay on spot before the show"<<endl<<endl;
	cout<<"\t\t\t\t Choose your preference (1-3): ";
		cin>>choice2;
		switch(choice2){
		
			case 1 :
				cout<<endl<<"\t\t\t\t Enter your mobile number : ";
				cin>>card_mob_num;
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			case 2 :
				cout<<endl<<"\t\t\t\t Enter your card number : ";
				cin>>card_mob_num;
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			case 3 :
				cout<<endl<<"\t\t\t\t You have successfully booked tickets, please click 1 to go to ticket details"<<endl;
				break ;
				
			default :
				cout<<endl<<"\t\t\t\t Invalid choice"<<endl;
				cout<<endl<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket2();
				break;
    }
}

int main(){
	
	info_check();
	
	buy_ticket2();
	
	return 0;
}

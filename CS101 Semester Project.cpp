#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;

void info_check();
int buy_ticket1();
int buy_ticket2();
void moviedetails(const string &title,const string &genre,const string &time,const string  &ratings,const string &summary);
void showingtoday();

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
int buy_ticket1(){
		
		system("cls");
		cout<<endl<<endl;
		cout<<"\t\t\t\t Please choose your prefered movie :"<<endl<<endl;
		
		showingtoday();	
		
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
	buy_ticket2();
	return tickets;
	return choice1;
}
int buy_ticket2(){
	
	int flag3, choice2;
	double card_mob_num;
	cout<<endl<<"\t\t\t\t Would you like to add a deal with your ticket ?"<<endl;
	cout<<endl<<"\t\t\t\t If yes then press 1 and if not then press 0 : ";
	cin >> flag3;
	cout<<endl;
	if(flag3==1){
		//areej deal function then add to total
	}
	cout<<"\t\t\t\t Prefered payment method : "<<endl<<endl;
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
				cout<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket2();
				break;
    }
    return choice2;
}

//AREEJ
void moviedetails(const string &title,const string &genre,const string &time,const string  &ratings,const string &summary){   

	 //moviedetailsfunction

	bool buy;
	cout <<"\t\t****************************************************************\n";
    cout <<"\n\t\t========================================================\n";
	cout <<"\n\n\t\t\t"<<title<<endl;
	cout <<"\n\t\t========================================================\n";
	cout <<"\t\t****************************************************************\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t ";
	
	cout <<"\n\t\t Genre:  "<<genre<<endl;
	cout <<"\n\t\t Time:"<<time<<endl;
	cout <<"\n\t\t Ratings: "<<ratings <<endl;
	cout <<"\n\t\t Summary:" <<summary<<endl;
	cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;//BUYnow
	
	cin >> buy;
	if(buy){
		cout <<"\t\t\tThankyou for buying ticket.."<<endl;
	}
	else{
		cout <<"\t\tOpps!"<<endl;
	}
}

void showingtoday() {				//AREEJ
	
	int option=0;
  
    do{

    cout <<"\t\t\t\t****************************************************************";
    cout <<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   	cout <<"\n\n\t\t\t\t\t\t\t SHOWING TODAY\n\n"<<endl;
   	cout <<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   	cout <<"\t\t\t\t****************************************************************";	
   	cout <<"\n\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;

   	cout <<"\t\t\t\t 1.The Shawshank Redemption"<<"  "<<"ratings: 9/10"<<"\t 8:30  AM"<<endl;
   	cout <<"\t\t\t\t 2.Inception"<<"                  "<<"ratings: 8/10" <<"\t 10:30 AM"<<endl; 
   	cout <<"\t\t\t\t 3.Parasite"<<"                   "<<"ratings: 7/10"<<"\t 12:20 PM"<<endl;
	cout <<"\t\t\t\t 4.The Dark Knight"<<"            "<<"ratings: 9/10"<<"\t 3:30  PM"<<endl;
	cout <<"\t\t\t\t 5.Forrest Gump"<<"               "<<"ratings: 8/10"<<"\t 5:10  PM"<<endl<<endl<<endl;
	cout <<"\t\t\t\t****************************************************************\n";
	cout <<"\t\t\t\t****************************************************************\n"<<endl;
    cout << "\t\t\t\tPick Movie (1-5 /0 for exit to menu): "; 
    cin>>option;
    
     switch(option){//for checking multiple cases 
		case 1 :
		moviedetails("The Shawshank Redemption","DRAMA","8:30-10:30PM","9/10","Man escapes prison through hope, friendship, and perseverance over decades.");
			break;//function calling moviedetails
		case 2:
		  moviedetails("INCEPTION","Sci-Fi, Thriller","10:30-12:00PM","8/10","Thieves plant ideas in dreams, blurring reality with layered subconscious.");
			break;
		case 3:
	       moviedetails("Parasite","Sci-Fi, Thriller","12:30-2:00PM","7/10","Poor family infiltrates rich household, leading to shocking class conflict.");
			break;
		case 4:
	       moviedetails("The Dark Knight","Action, Crime, Thriller","2:30-4:30PM","9/10","Batman battles Joker in a chaotic fight for Gotham’s soul.");
			break;
		case 5:
			moviedetails("Forrest Gump"," Drama, Romance","5-6:30PM","8/10","Simple man witnesses history, finding love and purpose through life’s challenges.");
	      break;
	    case 0:
	    	cout <<"\t\t\tExit to main menu"<<endl;
	    	break;//exit case
		default: 
		cout <<"\t\t\t\tChoose from (1-5).Please try again!"<<endl;
		break;
 	} 
 	
	} while(option!=0);
	
 
}

int main(){
	
	info_check();

	return 0;
}




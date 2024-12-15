#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include<ctime>
#include <conio.h>

using namespace std;

void info_check();
int buy_ticket1();
int buy_ticket2();
int main();
int logindetails();
void information();  //function prototype
void showingtoday();
void recommendmovie();
void upcomingmovie();
void popularmovie();
void moviedetails();
void randommovie();
void randomaddsdeal();
void ticket_details();

void randomaddsdeal(){
string randomaddsdeal[]={"Coming Soon!The Unbreakable Boy!","Snack Combo Large Popcorn&Drink for just $10!","Join VIP! Earn points, get rewards!","Free birthday ticket. Celebrate with us!","Matinee specials. Discounted tickets all day!",
"Special Screening!One night only IMAX screening!","Prepare for scares.THE CONJURING Only in theaters!","Fun for all ages!Kung Fu Panda 4 is now showing!","Story of love&loss.The Shawshank Redemption watch now!","The future is here.INCEPTION!","Watch your favorite movies in comfort!",
"Popcorn combo deal! Perfect for movie night!","Get your tickets early and save 20%!","Unlimited movies for $19.99/month!","VIP seats available. Upgrade for comfort!","Get your tickets today, save more!","Family pack: Enjoy movies together, discounted!","Earn points with every movie ticket purchase!","Big screen, big savings on tickets!",};
int size=sizeof(randomaddsdeal)/sizeof(randomaddsdeal[0]);
srand(time(0));
int random=rand()%size;
cout<<"||"<<randomaddsdeal[random]<<"||"<<endl;
cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t ==========================="<<endl;

}
void randommovie(){
		int buy;
	system("CLS");//in-bulit function used to clear screen for upcomind functions
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t\t"<<"RANDOM MOVIE "<<endl;
 	cout <<"\n\t\t========================================================\n";
    	cout <<"\t\t\t\t(suggesting you the movie)"<<endl;
    string randommovie[]={//initilizing string array
    "\t\tThe Shawshank Redemption  \t\t\n GENRE :DRAMA \t\t\n TIMING :8:30-10:30PM  \t\t\n SUMMARY: Man escapes prison through hope, friendship, and perseverance over decades.",
    "\t\tINCEPTION \t\t\n GENRE: Sci-Fi/Thriller \t\t\n TIMING: 10:30-12:00PM \t\t\n SUMMARY :Thieves plant ideas in dreams, blurring reality with layered subconscious.",
    "\t\tThe Dark Knight \t\t GENRE: Action/Crime/Thriller \t\t\n TIMING: 2:30-4:30PM  \t\t\n SUMMARY: Batman battles Joker in a chaotic fight for Gotham’s soul.",
    "\t\tSpider-Man: Into the Spider-Verse GENRE:(A/D) \t\t\n TIMING: 1:00PM-2:30PM \t\t\n SUMMARY: A visually stunning and innovative superhero film about multiple versions of Spider-Man from different universes.",
    "\t\t21 Jump Street \t\t\n GENRE:(C/A)\t\t\n TIMING: 3:00PM-2:00PM \t\t\n SUMMARY:Two cops go undercover in a high school, facing hilarious challenges while trying to bust a drug ring. arts world.",
    "\t\tKung Fu Panda 4 \t\t\n GENRE:(C) \t\t\n TIMING:11:00-12:30AM \t\t\n SUMMARY:Po and his friends return for another action-packed adventure in the martial arts world.",
    "\t\tGodzilla x Kong :The New Empire \t\t\n GENRE:(A) \t\t\n TIMING: 8:00AM-10:30AM \t\t\n SUMMARY:The legendary monsters face off once again as they uncover new forces threatening the Earth.",
    "\t\tThe Conjuring \t\t\n GENRE:(H) \t\t\nTIMING:4:00PM-6:30PM \t\t\nSUMMARY: Paranormal investigators take on a haunting case in a secluded farmhouse.",
    };

    int size = sizeof(randommovie)/sizeof(randommovie[0]);//for calculating the size array
    srand(time(0));
    int random=rand()%size;//use of random regretator for calling the array index 
    cout <<"\n\t\t========================================================\n";
    cout <<"\t\t\tRECOMMENDED MOVIE:\n\n"<<randommovie[random]<<endl;
    cout <<"\n\t\t========================================================\n";
    cout <<"\t\t\tDo you want to buy ticket?( 1 for yes,0 for no)"<<endl;
    cin >> buy;
	    if(buy==1){
		cout <<"\t\t\tThankyou for buying ticket.."<<endl;
		//calling aiza function
	    }else if(buy!=1){
		cout <<"Going Menu :]"<<endl;
	    }else{
		}
		system("CLS");
}

void recommendmovie(const string &title ,const string &summary ,const string &time){   //RECOMMEND MOVIE
	int  buy;
        system("ClS");
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t"<<title<<endl;
	cout <<"\n\t\t========================================================\n";
	
       cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
       randomaddsdeal();
	cout <<"\n\t\t Timing:"<<time<<endl;
	cout <<"\n\t\t Description:" <<summary<<endl;

	cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;
	cin >> buy;
	    if(buy==1){
		cout <<"\t\t\tGoing buying ticket.."<<endl; //AIZA FUNCTION 
	    }else if(buy!=1){
	    		cout <<"\tGoing back to the main menu."<<endl;
		}else{	
	    }
system("CLS");
} //receving  parameters at sddress
void moviedetails(const string &title,const string &genre,const string &time,const string  &ratings,const string &summary){    //moviedetailsfunction
	int buy;
	 system("ClS");
        cout <<"\n\t\t========================================================\n";
	cout <<"\n\n\t\t\t"<<title<<endl;
	cout <<"\n\t\t========================================================\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t ";
	randomaddsdeal();
	cout <<"\n\t\t Genre:  "<<genre<<endl;
	cout <<"\n\t\t Time:"<<time<<endl;
	cout <<"\n\t\t Ratings: "<<ratings <<endl;
	cout <<"\n\t\t Summary:" <<summary<<endl;
	cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;
	cin >> buy;
	if(buy==1){
		cout <<"\t\t\tGoing buying ticket.."<<endl; //AIZA FUNCTION 
	}else if (buy==0){
		cout<<"\t\t\t Going to menu..\n";
	}else{	
	}
		
	}


void showingtoday(){//funation 
		int option=-1;
  
    while(option!=0){
	
	system ("CLS");
    //time should be here
        cout <<"\n\t\t========================================================\n";
   	cout <<"\n\n\t\t\t\t SHOWING TODAY\n\n"<<endl;
   	 cout <<"\n\t\t========================================================\n";
   	cout <<"\n\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
   	cout <<"\t\t\t1.The Shawshank Redemption"<<"  "<<"ratings: 9/10"<<"\t 8:30  AM"<<endl;
   	cout <<"\t\t\t2.Inception"<<"                  "<<"ratings: 8/10" <<"\t 10:30 AM"<<endl; 
   	cout <<"\t\t\t3.Parasite"<<"                   "<<"ratings: 7/10"<<"\t 12:20 PM"<<endl;
	cout <<"\t\t\t4.The Dark Knight"<<"            "<<"ratings: 9/10"<<"\t 3:30  PM"<<endl;
	cout <<"\t\t\t5.Forrest Gump"<<"               "<<"ratings: 8/10"<<"\t 5:10  PM"<<endl;
	cout <<"\n\t\t========================================================\n";
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
 	} 
 }
 system("CLS");
}
void upcomingmovies(){
	system("CLS");
  int exit=-1;
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t\t\t UPCOMING MOVIES"<<endl;
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t These movies are going to be release soon.Do check them :}"<<endl;
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
	cout <<"\n\t\t 1.Jurassic World Rebirth "<<"\t\tMarch 21, 2025"<<endl;
	cout <<"\n\t\t 2.The Unbreakable Boy    "<<"\t\tFebruary 21, 2025"<<endl;
   	cout <<"\n\t\t 3.Thunderbolts          "<<"\t\tMay 2, 2025"<<endl;
    	cout <<"\n\t\t 4.How to Train Your Dragon"<<"\t\tJune 13, 2025"<<endl;	
	cout <<"\n\t\t 5.28 Years Later"<<"\t\t\tJune 20, 2025"<<endl;
	while(exit!=0){
	cout <<"\n\t\t\t(select 0 to exit!):"<<endl;cin>>exit;
		if(exit==0){
		information();
		}else{
			cout <<"\t\t\tyou can't choose from these movies..\n\t\t\t we will let you know you when these are available\n";
		}
	}

}
 void popularmovie(){ //function
 system("CLS");
 	int choice=-1;
	while(choice!=0){
	
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\tPOPULAR RELEASE OF 2024"<<endl;
	cout <<"\n\t\t========================================================\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
	cout <<"\t\t1.Godzilla x Kong"<<"\t\t\t\t\t8.8/10"<<endl;
	cout <<"\t\t2.Kung Fu Panda 4 "<<"\t\t\t\t\t9.2/10"<<endl;
	cout <<"\t\t3.Spider-Man: Into the Spider-Verse "<<"\t\t\t9/10"<<endl;
	cout <<"\t\t4.21 Jump Street"<< "\t\t\t\t\t9.3/10"<<endl;
	cout <<"\t\t5.The Conjuring"<< "\t\t\t\t\t\t9.9/10"<<endl;
	cout <<"(Select 0 to exit)"<<endl;
	cout <<"\t\t\t Select your choice: ";cin>>choice;
	switch(choice){

		
		case 1:
			recommendmovie("Godzilla x Kong","The New Empire(A) - The legendary monsters face off once again as they uncover new forces threatening the Earth.","8:00AM-10:30AM");
			break;
		case 2:
			recommendmovie("Kung Fu Panda 4 ","(C) Po and his friends return for another action-packed adventure in the martial arts world.","11:00-12:30AM");
			break;
		case 3:
			recommendmovie("Spider-Man: Into the Spider-Verse"," (A/D)A visually stunning and innovative superhero film about multiple versions of Spider-Man from different universes.","1:00PM-2:30PM");
			break;
		case 4:
			recommendmovie("21 Jump Street ","(C/A) Two cops go undercover in a high school, facing hilarious challenges while trying to bust a drug ring. arts world.","3:00PM-2:00PM");
			break;
		case 5:
				recommendmovie("The Conjuring","(H) Paranormal investigators take on a haunting case in a secluded farmhouse.","4:00PM-6:30PM");
			break;
		default:
			cout <<"Oops!Select from the options above(1-5)"<<endl;
	}
} 
system("ClS");
information();
}
void recommendations(){  //CHOICE 3 IN INFORMAATION 
	char genreans,durationans,typeans,heroans,prefans;//INITILZATION FOR VARAIABLES
system("CLS");
  
    	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t\t RECOMMENDATIONS"<<endl; 
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t(Just answere a few questions and we will let you know your interest)"<<endl;
	cout <<"\n\t\t\t(Use CAPITAL CASE CHARACTER)"<<endl;
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
    do{
	cout <<"\t\tQ#01: What kind of movie are you in the mood for? Drama(D) Action(A), Comedy(C), Horror(H)!"<<endl; cin>>genreans; //use od do_while to minimizing the errors from user
   }while(!(genreans=='D'||genreans=='A'||genreans=='C'||genreans=='H'));
   do{
    cout <<"\t\tQ#02:Do you have time for a long movie(L) or prefer something shorter(S)?"<<endl;cin>>durationans;
    }while(!(durationans=='L'||durationans=='S'));
    do{
	cout<<"\t\tQ#03:Are you interested in classics(C), blockbusters(B)?"<<endl; cin>>typeans;
    }while(!(typeans=='C'||typeans=='B'));
    do{
	cout<<"\t\tQ#04:Do you like 'Super-Hero saving the world'kind off movies?(Y or N)"<<endl;
    cin>>heroans;}while(!(heroans=='Y'||heroans=='N'));//use of comparison operators for selection
    do{
	cout <<"\t\tQ#05:Do you  prefer 'catastrophic and end of world 'movies?(Y or N)"<<endl;
    cin>>prefans;} while(!(prefans=='Y'||prefans=='N'));
    cout <<"\t\tShowing results....\n";
    if(genreans=='D'|| genreans=='A'&& typeans=='B'&& heroans=='N'&& prefans=='Y'){
    			recommendmovie("INTERSTELLAR","Former pilot leads mission to find habitable planet, battling time and emotions.","6-8:30AM");//calling function by passing multiple arguments
	}else if(genreans=='C'||genreans=='D'&&typeans=='C'||typeans=='B'&& heroans=='N'&&prefans=='Y'){
			recommendmovie("Shaun of Dead","Unmotivated man hilariously redeems himself saving loved ones in chaos..","10-11:30AM");//function overloading
	}else if( genreans=='A'||genreans=='D'&& durationans=='L'&& typeans=='B'||typeans=='C'&& heroans=='Y'&&prefans=='Y'){
			recommendmovie("Avengers:Endgame","Heroes unite to undo Thanos devastation and save the universe.","9-11:30PM");
	}else if(genreans=='H'&& durationans=='S'||durationans=='L'&& typeans=='B'&& heroans=='N'&&prefans=='C'){
			recommendmovie("A Quiet Place","Family survives in silence, avoiding sound-hunting creatures, protecting their children.","4:30-6:00PM");
	}else if(genreans=='D'){ 
			recommendmovie("The Pursuit of Happyness ","Homeless father fights for career and son’s better future. ","8-9:30PM");
	}else if( genreans=='A'){
			recommendmovie("Mission: Impossible – Rogue Nation ","Ethan Hunt battles Syndicate with thrilling chases and intense combat.","5:30-7;30AM");
	}else if(genreans=='H'){
			recommendmovie("IT","Kids confront ancient evil clown blending supernatural horror and childhood trauma..","4:30-6:30PM");
	}else if(genreans=='C'){
			recommendmovie("Dumb and Dumber","Two friends' chaotic road trip leads to hilarity and bizarre events.","8:50-10:20AM");
	}else{  system("ClS");
		cout <<"Sorry, we couldn't find an exact match, but here are some popular releases of 2024!"<<endl;
       popularmovie();//calling function;
	}//use of if-else statement for selection;
    
}
void information(){
 	int option,buy;
   	system("CLS");
  while(option!=6){
	cout <<"\n\t\t========================================================\n";
   	cout <<"\n\n\t\t\t\t  INFORMATION"<<endl;                                      //main information function which calls everyother function
   	cout <<"\n\t\t========================================================\n";
    cout <<"\n";
    cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
   	cout <<"\n\n\t\t\t\t 1.Showing Today"<<endl;
   	cout <<"\n\n\t\t\t\t 2.Upcoming Movies"<<endl;
   	cout <<"\n\n\t\t\t\t 3.Recommendations"<<endl;
   	cout <<"\n\n\t\t\t\t 4.POPULAR RELESES"<<endl;
   	cout <<"\n\n\t\t\t\t 5.Random MOVIE"<<endl;
   	cout <<"\n\n\t\t\t\t 6.Exit to Main Menu"<<endl;
   	cout<<"\n\n";
   	cout<<"Select option:";
   	cin>>option;
   //MAIN INFORMATION FUNCTION WHICH CALLS ALL THE FUNCTION AND CONNECTS ALL THE FUNCTION DECLARED.

	switch(option){
		case 1://FUNCTION CALLING
			showingtoday();
			break;
		case 2:
			upcomingmovies();
			break;
		case 3:
			recommendations();
			break;
		case 4:
			popularmovie();
			break;
		case 5:
			randommovie();
			break;
		case 6:
			cout <<"Press a key to continue to main menu: "<<endl;
			getch();
			main();
			break;
		default:
			cout<<"\n\n\t\t\t\t[PLEASE choose from (1-6) for more options & (0) for exit]";
 	}
	}  //for invalid user ans
 	
}
  
int logindetails(){
	
	system("cls");
	string user_name, pass_word, password, username;//initlizing variables
	cout<<endl<<endl<<"\t\t\t\t\t Sign in to your account <3 ";
	cout<<endl<<endl<<"\t\t\t\t Enter your username: ";
	cin.ignore();//for buffering ignoring 
	getline(cin, user_name);
	
	
	cout<<endl<<endl<<"\t\t\t\t Enter your password: ";
	getline(cin, pass_word);
	cout<<endl<<endl<<"\t\t\t\t ";
	
	ifstream read("User.txt");
	getline(read, username);

	ifstream read1("Pass.txt");
	getline(read1, password);
	
	if(( user_name== username) && ( pass_word== password )){
		return 1; 
	}
	else{
		return 0;
	}
}


void info_check(){
	
	string flag1;
	
	cout<<"\t\t\t\t Please answer following with yes or no.\n\t\t\t\t Have you signed up ? : ";
	cin>>flag1;
	//use of if-else to chcek multiple conditions
	if ( flag1=="yes" || flag1=="yES" || flag1=="YES"|| flag1=="yeS"|| flag1=="Yes"){
		cout<<"\t\t\t\t Please press any key to login to your account !";
		getch();
		int temp1= logindetails();						
		if (temp1==0){
			cout<<"No matching credentials! Press any key to go back to main menu!";
			getch();
			main();
		}
								
		else if(temp1==1){
		cout<<"Sign in successful!\n\n\t\t\t\t Welcome Back ! Press any key to continue: ";
		getch();
		buy_ticket1();
		getch();
		}
	}
	
	else if(flag1=="no" || flag1 == "No"|| flag1=="NO"|| flag1=="nO") {
		cout<<"\t\t\t\t Press any key to continue to sign up for buying ticket!";
		getch();
		main();
	}
	
	else{
		cout<<endl;
		cout<<"\t\t\t\t Time out! Try Again! Press any key to restart";
		getch();
		main();
	}
}


int buy_ticket1(){
		
		system("cls");
		int tickets, choice1, choice3, go_to;
			
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t SHOWING TODAY"<<endl<<endl<<endl;
		cout <<"\t\t\t\t 1.The Shawshank Redemption"<<"   "<<"ratings: 9/10"<<"\t 8:30  AM"<<endl;
	   	cout <<"\t\t\t\t 2.Inception"<<"                  "<<"ratings: 8/10" <<"\t 10:30 AM"<<endl; 
	   	cout <<"\t\t\t\t 3.Parasite"<<"                   "<<"ratings: 7/10"<<"\t 12:20 PM"<<endl;
		cout <<"\t\t\t\t 4.The Dark Knight"<<"            "<<"ratings: 9/10"<<"\t 3:30  PM"<<endl;
		cout <<"\t\t\t\t 5.Forrest Gump"<<"               "<<"ratings: 8/10"<<"\t 5:10  PM"<<endl<<endl<<endl;
		cout <<"\t\t\t\t Please choose your prefered movie (1-5) : ";
		cin >> choice3;

		cout<<"\n\t\t\t\t For more details press 0 to for more information on these movies or press 1 to continue!";
		cin>>go_to;
		 
		if (go_to == 0){
			showingtoday();
		}
		 
		else if( go_to==1){
		
		cout<<endl<<endl;
	
		cout<<"\t\t\t\t Enter number of ticket you would like to purchase : ";
		cin>>tickets;
		system("cls");
		cout<<endl<<endl;
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
				break;
	}	
	buy_ticket2();
}
else{
	cout<<"\t\t\t\t Error! Try again! Press any key to go back to main menu!";
	getch();
	main();
}
	return tickets;
	return choice1;
	return choice3;
}
int buy_ticket2(){
	
	int choice2;
	double card_mob_num;
	
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
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please press any key to go to ticket details"<<endl;
				getch();
				ticket_details();
				break ;
				
			case 2 :
				cout<<endl<<"\t\t\t\t Enter your card number : ";
				cin>>card_mob_num;
				cout<<endl<<"\t\t\t\t You have successfully purchased tickets, please press any key go to ticket details"<<endl;
				getch();
				ticket_details();
				break ;
				
			case 3 :
				cout<<endl<<"\t\t\t\t You have successfully booked tickets, please press any key to go to ticket details"<<endl;
				getch();
				ticket_details();	
				break ;
				
			default :
				cout<<endl<<"\t\t\t\t Invalid choice"<<endl;
				cout<<"\t\t\t\t Please choose again "<<endl;
				buy_ticket2();
				break;
    }

    return choice2;
}

int main(){
	
	int choice, choice1, option, choice2, tickets ;
	system("cls");
	
	cout<<endl<<endl<<"\t\t\t\t Welcome to the only Movie Booking Platform you need! ";
	cout<<endl<<endl<<"\t\t\t\t\t\t How may we help you? ";
	cout<<endl<<endl<<"\t\t\t\t\t (1) I would like to Sign in / Signup !\n\n\t\t\t\t\t (2) Help! What to watch ?\n\n\t\t\t\t\t (3) I want to buy ticket !\n\n\t\t\t\t\t (4) I want to see my ticket details !\n\n\t\t\t\t\t (5) I want to exit :( ";
	
	cout<<endl<<endl<<"\t\t\t\t Please enter your desired service (1-5): ";
	cin>>choice;
	
	switch(choice){
		
		case 1:	{								//login menu
			system("cls");
			char ch; 
			int ch1;
					
			cout<<endl<<endl<<"\t\t\t\t You chose our Sign up / Sign in Menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> ch1;
							
				if(ch1==0){
					main();
				}
				else{
				
					cout<<endl<<"\t\t\t\t Would you like to sign up or sign in?(U/I)"<<endl;
					cout<<endl<<"\t\t\t\t ";
					cin>>ch;
					
					if(ch=='I'|| ch=='i'){
								
						int temp= logindetails();
								
							if (temp==0){
								cout<<"No matching credentials! Press a key to go back to main menu!";
								getch();
								main();
								
							}
								
							else if(temp==1){
								cout<<"Sign in successful!\n\n\t\t\t\t Welcome Back ! ";
								cout<<"\n\t\t\t\t Press any key to go to your ticket details. "<<endl<<endl<<"\t\t\t\t";
								getch();								
								// here, after welcome we will directly go to ticket details menu and give opt to go back to main() through recursion
							}
					}
					
					else if(ch=='U'|| ch== 'u'){
							
						system("cls");
						string username, password;
							
						cout<<endl<<endl<<"\t\t\t\t\t Sign up for an account <3 ";
						cout<<endl<<endl<<"\t\t\t\t Enter your username: ";							
						cin.ignore();
						getline(cin, username);
									
						cout<<endl<<endl<<"\t\t\t\t Enter your password: ";
						getline(cin, password);
									

						cout<<endl<<endl<<"\t\t\t\t ";
								
						ofstream USERname("User.txt");
						USERname<<username;				
						USERname.close();

						ofstream PASSword("Pass.txt");
						PASSword<<password;
						PASSword.close();
						cout<<"Sign up completed !"; 
						main();// go back to main menu
							
					}
					
					else{
						cout<<endl<<endl<<"\t\t\t\t Invalid Choice :(";
					}
				}
				break;
		}	// case 1 ends
		
		case 2:{							// information menu
			int ch1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our What to watch menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> ch1;
			
			if(ch1==0){
					main();
			}
					
			else{
				information();		// call information function here from areej
			break;
		} // case 2 ends
		
		case 3:{							// buy ticket
			int ch1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Buy Ticket menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> ch1;
			
			if(ch1==0){
					main();
			}
					
			else{
				info_check(); // call buy ticket function from aiza lso ask if user is logged in if not done by aiza
				break;
		}
		
		case 4:{															// details menu
			int ch1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Ticket Details menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> ch1;
			
			if(ch1==0){
					main();
			}
					
			else{
		 		ticket_details();											// call ayesha's detail function and also ask if user is logged in if not done by ayesha
			break;
		}
		
		case 5:{											// exit option
			int ch1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Exit menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue exit :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> ch1 ;
			
			if(ch1==0){
					main();
			}
					
			else{
				cout<<endl<<endl<<"\t\t\t\t Good Bye! Come Again <3";
			}
			break;
		}
		
		default:{
			char ch;
			cout<<endl<<endl<<"\t\t\t\t Invalid option. Try again? (Y/N): ";
			cin>>ch;
			if(ch=='Y'|| ch =='y'){											// if user enters invalid selection from main menu
					main();
			}
					
			else{
				cout<<endl<<endl<<"\t\t\t\t	ERROR!! Platform closed!";
				break;
		}
			break;
		}
				
	}	
	}	
	
} //switch of main menu ends

return 0;
}
}//int main bracket



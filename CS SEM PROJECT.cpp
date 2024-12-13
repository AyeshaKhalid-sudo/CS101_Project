
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<conio.h>
#include<fstream>

using namespace std;

void information();  //function prototype
void showingtoday();
void recommendmovie();
void upcomingmovie();
void popularmovie();
void deals();
void moviedetails();
void randommovie();
void randomaddsdeal();

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
//	system("CLS");
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t\t"<<"RANDOM MOVIE "<<endl;
    cout <<"\n\t\t========================================================\n";
    cout <<"\t\t\t\t(suggesting you the movie)"<<endl;
  char A;
    do{
	
    string randommovie[]={
	"\t\tThe Shawshank Redemption  \t\t\n GENRE :DRAMA \t\t\n TIMING :8:30-10:30PM \t\t\n SUMMARY: Man escapes prison through hope, friendship, and perseverance over decades.",
    "\t\tINCEPTION \t\t\n GENRE: Sci-Fi/Thriller \t\t\n TIMING: 10:30-12:00PM \t\t\n SUMMARY :Thieves plant ideas in dreams, blurring reality with layered subconscious.",
    "\t\tThe Dark Knight \t\t GENRE: Action/Crime/Thriller \t\t\n TIMING: 2:30-4:30PM  \t\t\n SUMMARY: Batman battles Joker in a chaotic fight for Gotham’s soul.",
	"\t\tSpider-Man: Into the Spider-Verse GENRE:(A/D) \t\t\n TIMING: 1:00PM-2:30PM \t\t\n SUMMARY: A visually stunning and innovative superhero film about multiple versions of Spider-Man from different universes.",
	"\t\t21 Jump Street \t\t\n GENRE:(C/A)\t\t\n TIMING: 3:00PM-2:00PM \t\t\n SUMMARY:Two cops go undercover in a high school, facing hilarious challenges while trying to bust a drug ring. arts world.",
    "\t\tKung Fu Panda 4 \t\t\n GENRE:(C) \t\t\n TIMING:11:00-12:30AM \t\t\n SUMMARY:Po and his friends return for another action-packed adventure in the martial arts world.",
    "\t\tGodzilla x Kong :The New Empire \t\t\n GENRE:(A) \t\t\n TIMING: 8:00AM-10:30AM \t\t\n SUMMARY:The legendary monsters face off once again as they uncover new forces threatening the Earth.",
    "\t\tThe Conjuring \t\t\n GENRE:(H) \t\t\nTIMING:4:00PM-6:30PM \t\t\nSUMMARY: Paranormal investigators take on a haunting case in a secluded farmhouse.",
    "\t\tInside Out \t\t\n GENRE: (A/D) \t\t\n TIMING:3:15PM-4:45PM \t\t\n SUMMARY: A creative and emotional animated film that explores the inner workings of a young girl's mind as she navigates growing up. ",
    "\t\tThe Godfather \t\t\n GENRE :CRIME, DRAMA \t\t\n TIMING :10:30PM-1:30AM \t\t\n SUMMARY: The aging patriarch of a powerful crime family transfers control to his youngest son.",
    "\t\t12 Angry Men \t\t\n GENRE :DRAMA \t\t\n TIMING :5:00-7:00AM \t\t\n SUMMARY: A jury of 12 men must decide the fate of a young man accused of murder, exploring the importance of critical thinking and reasonable doubt.",
    "\t\tZootopia \t\t\n GENRE: (A/D) \t\t\n TIMING: 2:40-4 PM \t\t\n SUMMARY:A clever and visually stunning animated film set in a world where animals have evolved to live in harmony, following the story of a rabbit police officer and a fox con artist ", 
	"\t\tThe Matrix \t\t\n GENRE: (A/D)\t\t\n SUMMARY: A thought-provoking science fiction film about a computer hacker who discovers that his whole life has been a simulation created by machines. ",
	"\t\tFinding Nemo \t\t\n GENRE: (A/D) \t\t\n TIMNG:11:15AM-12:45PM \t\t\n SUMMARY: A heartwarming and visually stunning animated film about a clownfish named Marlin searching for his son Nemo in the vast ocean. "};

    int size = sizeof(randommovie)/sizeof(randommovie[0]);
    srand(time(0));
    int random=rand()%size;
    cout <<"\t\t.......................................................\n";
    cout <<"\t\t\tRECOMMENDED MOVIE:\n\n"<<randommovie[random]<<endl;
	cout <<"\t\t.......................................................\n";
	int buy;
		cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;
	cin >> buy;
	    if(buy==1){
		cout <<"\t\t\tThankyou for buying ticket.."<<endl;
	    }else{
		cout <<"\tOpps!"<<endl;
	    }
	cout<<"press any key(0 to exit)"<<endl;
	cin>>A;
}while(A!=0);
}

void recommendmovie(const string &title ,const string &summary ,const string &time){   //RECOMMEND MOVIE
	int  buy;

	cout <<"\t\t****************************************************************\n";
	cout <<"\n\t\t\t\t"<<title<<endl;
	cout <<"\t\t****************************************************************\n";
	
  cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
  randomaddsdeal();
	cout <<"\n\t\t Timing:"<<time<<endl;
	cout <<"\n\t\t Description:" <<summary<<endl;

	
		cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;
	cin >> buy;
	    if(buy==1){
		cout <<"\t\t\tThankyou for buying ticket.."<<endl;
	    }else{
		cout <<"\tOpps!"<<endl;
	    }

}
void moviedetails(const string &title,const string &genre,const string &time,const string  &ratings,const string &summary){    //moviedetailsfunction
	bool buy;
	
        cout <<"\n\t\t========================================================\n";
	cout <<"\n\n\t\t\t"<<title<<endl;
	cout <<"\n\t\t========================================================\n";
	
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t ";
	randomaddsdeal();
	cout <<"\n\t\t Genre:  "<<genre<<endl;
	cout <<"\n\t\t Time:"<<time<<endl;
	cout <<"\n\t\t Ratings: "<<ratings <<endl;
	cout <<"\n\t\t Summary:" <<summary<<endl;
	cout <<"\t\t\tDo you want to buy ticket?( 0 for no,1 for yes)"<<endl;//BUYnow
	cin >> buy;
	if(buy){
		cout <<"\t\t\tThankyou for buying ticket.."<<endl;
	}else{
		cout <<"\t\tOpps!"<<endl;
	}
}

void showingtoday(){//funation 
		int option=0;
  
    do{
	//system ("CLS");
	 // system("color 03");
    //time should be here
        cout <<"\t\t****************************************************************";
   	cout <<"\n\n\t\t\t\t SHOWING TODAY\n\n"<<endl;
   	cout <<"\t\t****************************************************************";	
   	cout <<"\n\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
   	cout <<"\t\t\t\t1.The Shawshank Redemption"<<"  "<<"ratings: 9/10"<<"\t 8:30  AM"<<endl;
   	cout <<"\t\t\t\t2.Inception"<<"                  "<<"ratings: 8/10" <<"\t 10:30 AM"<<endl; 
   	cout <<"\t\t\t\t3.Parasite"<<"                   "<<"ratings: 7/10"<<"\t 12:20 PM"<<endl;
	cout <<"\t\t\t\t4.The Dark Knight"<<"            "<<"ratings: 9/10"<<"\t 3:30  PM"<<endl;
	cout <<"\t\t\t\t5.Forrest Gump"<<"               "<<"ratings: 8/10"<<"\t 5:10  PM"<<endl;
	cout <<"\t\t****************************************************************\n";
	cout <<"\t\t****************************************************************\n";
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
 } while(option!=0);
 
}
void upcomingmovies(){
  int exit;
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t\t\t\t UPCOMING MOVIES"<<endl;
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t These movies are going to be release soon.Do check them :}"<<endl;
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
	cout <<"\n\t\t 1.Jurassic World Rebirth "<<"\t\tMarch 21, 2025"<<endl;
	cout <<"\n\t\t 2.The Unbreakable Boy    "<<"\t\tFebruary 21, 2025"<<endl;
    cout <<"\n\t\t 3.Thunderbolts          "<<"\t\tMay 2, 2025"<<endl;
    cout <<"\n\t\t 4.How to Train Your Dragon"<<"\t\tJune 13, 2025"<<endl;	
	cout <<"\n\t\t 5.28 Years Later"<<"\t\t\tJune 20, 2025"<<endl;
	do{
	cout <<"\n\t\t\t(select 0 to exit!):"<<endl;cin>>exit;
	if(exit==0){
		information();
	}else{
		cout <<"\t\t\tyou can't choose from these movies..\n\t\t\t we will let you know you when these are available\n";
	}
    }while(exit!=0);
	
}
void deals(){
	int choice;

	cout <<"\n\t\t========================================================\n";
    cout <<"\n\t\t________________________________________________________\n";
	cout <<"\n\t\t\t\tDEALS"<<endl;
    cout <<"\n\t\t________________________________________________________\n";
	cout <<"\n\t\t========================================================\n";
	cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
	cout <<"\t\t1Student discount"<<endl;
	cout <<"\t\t2.Combo Offers(Unlimited Refills popcorn,drink,snack)"<<endl;
	cout <<"\t\t3.Referral Rewards "<<endl;
	cout <<"\t\t4.Feedback Rewards"<<endl;
	cout <<"\t\t5.First time discount"<<endl;
	cout <<"(Select(1-5)& 0 to exit)"<<endl;
	cout <<"\t\t\t Select your choice: ";cin>>choice;
	if(choice==0){
		information();
	}else{
		cout <<"Added to your booking \n\t\t\t\nSuccessfully....."<<endl;
information();
	}
}
 void popularmovie(){ //function
 	int choice;
	 do{
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
		}while(choice!=0);
information();
}
void recommendations(){  //CHOICE 3 IN INFORMAATION 
	char genreans,durationans,typeans,heroans,prefans;//INITILZATION FOR VARAIABLES
//  system("color 07");
   //system ("CLS");
    cout <<"\n\t\t_________________________________________________________\n";
	cout <<"\n\t\t........................................................\n";
	cout <<"\n\t\t_________________________________________________________\n";
	cout <<"\n\t\t\t\t RECOMMENDATIONS"<<endl; 
	cout <<"\n\t\t_________________________________________________________\n";
	cout <<"\n\t\t.......................................................\n";
	cout <<"\n\t\t_________________________________________________________\n";
	cout <<"\n\t\t\3(Just answere a few questions and we will let you know your interest)\3"<<endl;
	cout <<"\n\t\t\t\3(Use CAPITAL LETTERS)\3"<<endl;
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
    if(genreans=='D'|| genreans=='A'&& durationans=='L'&& typeans=='B'&& heroans=='N'&& prefans=='Y'){
    	recommendmovie("INTERSTELLAR","Former pilot leads mission to find habitable planet, battling time and emotions.","6-8:30AM");//calling function by passing multiple arguments
	}else if(genreans=='C'||genreans=='D'&& durationans=='S'&&typeans=='C'||typeans=='B'&& heroans=='N'&&prefans=='Y'){
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
	}else{
		cout <<"Sorry, we couldn't find an exact match, but here are some popular releases of 2024!"<<endl;
       popularmovie();//calling punction;
	}
    
}
void information(){
 	int option,buy;
  // 	system("color 05");
  do{
    cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t========================================================\n";
   	cout <<"\n\n\t\t\t\t  INFORMATION"<<endl;                                      //main information function which calls everyother function
   	cout <<"\n\t\t========================================================\n";
	cout <<"\n\t\t========================================================\n";
    cout <<"\n";
    cout <<"\t\t\t\t\t\t\t\t\t\t\t\t";
	randomaddsdeal();
   	cout <<"\n\n\t\t\t\t 1.Showing Today"<<endl;
   	cout <<"\n\n\t\t\t\t 2.Upcoming Movies"<<endl;
   	cout <<"\n\n\t\t\t\t 3.Recommendations"<<endl;
   	cout <<"\n\n\t\t\t\t 4.POPULAR RELESES"<<endl;
   	cout <<"\n\n\t\t\t\t 5.Deals"<<endl;
   	cout <<"\n\n\t\t\t\t 6.Random MOVIE"<<endl;
   	cout <<"\n\n\t\t\t\t 7.Exit to main menu"<<endl;
   	cout<<"\n\n";
   	cout<<"Select option:";
   	cin>>option;
  //  system ("CLS");
   //MAIN FUNCTION WHICH CALLS ALL THE FUNCTION AND CONNECTS ALL THE FUNCTION DECLARED
//	system("color F0");
	switch(option){
		case 1:
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
			deals();
			break;
		case 6:
			randommovie();
			break;
		case 7:
			cout <<"See ya..byebyeee.."<<endl;
			exit(0);
			break;
		default:
			cout<<"\n\n\t\t\t\t[PLEASE choose from (1-6) for more options & (0) for exit]";
 	}
	 }while(option!=5); //for invalid user ans
 	
}
  
int logindetails(){
	
	system("cls");
	string user_name, pass_word, password, username;
	cout<<endl<<endl<<"\t\t\t\t\t Sign in to your account <3 ";
	cout<<endl<<endl<<"\t\t\t\t Enter your username: ";
	cin.ignore();
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

int main(){
	
	int choice;
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
			int choice1;
					
			cout<<endl<<endl<<"\t\t\t\t You chose our Sign up / Sign in Menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> choice1;
							
				if(choice1==0){
					main();
				}
				else{
				
					cout<<endl<<"\t\t\t\t Would you like to sign up or sign in?(U/I)"<<endl;
					cout<<endl<<"\t\t\t\t ";
					cin>>ch;
					
					if(ch=='I'|| ch=='i'){
								
						int temp= logindetails();
								
							if (temp==0){
								cout<<"No matching credentials!";
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
			int choice1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our What to watch menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> choice1;
			
			if(choice1==0){
					main();
			}
					
			else{
				information();		// call information function here from areej
			break;
		} // case 2 ends
		
		case 3:{							// buy ticket
			int choice1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Buy Ticket menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> choice1;
			
			if(choice1==0){
					main();
			}
					
			//else{
					// call buy ticket function from aiza lso ask if user is logged in if not done by aiza
			break;
		}
		
		case 4:{															// details menu
			int choice1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Ticket Details menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> choice1;
			
			if(choice1==0){
					main();
			}
					
			//else{
		 		// call ayesha's detail function and also ask if user is logged in if not done by ayesha
			break;
		}
		
		case 5:{											// exit option
			int choice1;
			system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t You chose our Exit menu.\n\n\t\t\t\t Made the wrong choice? We got you! \n\n\t\t\t\t Go Back by Pressing (0) or Press any number to continue exit :) ";
			cout<<endl<<endl<<"\t\t\t\t Stay or Return? : ";
			cin>> choice1;
			
			if(choice1==0){
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
	}	//switch of main menu ends
} //int main bracket





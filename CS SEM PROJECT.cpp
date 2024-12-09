
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include<fstream>

using namespace std;

int logindetails(){
	
	system("cls");
	string user_name, pass_word, det1;
	cout<<endl<<endl<<"\t\t\t\t\t Sign in to your account <3 ";
	cout<<endl<<endl<<"\t\t\t\t Enter your username: ";
	cin.ignore();
	getline(cin, user_name);
	
	
	cout<<endl<<endl<<"\t\t\t\t Enter your password: ";
	getline(cin, pass_word);
	cout<<endl<<endl<<"\t\t\t\t ";
	
	string det=user_name+pass_word;
	ifstream read("file.txt");
	getline(read, det1);
	
	if(det==det1){
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
									
						string det1=username+password;
						cout<<endl<<endl<<"\t\t\t\t ";
								
						ofstream details("file.txt");
						details<<det1;				
						details.close();
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
					
			//else{
						// call information function here from areej
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
				
	}	//switch of main menu ends
	
} //int main bracket





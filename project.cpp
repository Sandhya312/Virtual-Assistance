#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//wishing function//////////////////////////////////////////////////////////
void Wish(){
	time_t now = time(0);
	tm *time = localtime(&now);
	if(time-> tm_hour <12){
	    cout<<"========================"<<endl;
		cout<<"GOOD MORNING "<<endl;
		cout<<"========================"<<endl<<endl;
		string phrase = "Good Morning";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
	}
	else if(time-> tm_hour >=12 && time-> tm_hour <16){
		cout<<"========================"<<endl;
		cout<<"GOOD AFTERNOON "<<endl;
		cout<<"========================"<<endl<<endl;
		 string phrase = "Good Afternoon ";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
	}
		else if(time-> tm_hour >=16 && time-> tm_hour <24){
		cout<<"========================"<<endl;
		cout<<"GOOD EVENING "<<endl;
		cout<<"========================"<<endl<<endl;
		 string phrase = "Good Evening ";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
	}
	
}


////////////////date and time ///////////////////////////////////////////////////////
void date(){
	time_t now = time (0);
	char *dt = ctime(&now);
	cout<<"THE DATE AND TIME IS ..."<<endl<<dt<<endl;
		 string phrase = "THE DATE AND TIME IS ...";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
}
////////////////////////calculation///////////////////////////
void calc(){
	float n1,n2;
	char opr;
	cout<<"ENTER THE NUMBERS"<<endl;
		 string phrase = "ENTER THE NUMBERS...";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
	cin>>n1>>n2;
	cout<<"ENTER THE OPEARTION"<<endl;
	cin>>opr;
	switch(opr){
		 case '+':
		   cout<<n1+n2<<endl<<endl;
		 break;
		 
		  case '-':
		    cout<<n1-n2<<endl<<endl;
		 break;
		 
		  case '*':
		 cout<<n1*n2<<endl<<endl;
		 break;
		 
		  case '/':
		    cout<<n1/n2<<endl<<endl;
		 break;
		 
		 
		 default :
		 	cout<<"INVALID OPEARTION"<<endl;
		
	        break;
		
		
		
	}
	
	
}


int main() {
	system("cls");//clear the screeen
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t WELCOME TO VIRTUAL WORLD . I AM GROOVY , YOUR VIRTUAL ASSISTANCE \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
	 cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t------------------------------------------------------------------ \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl<<endl;
	 string phrase = "WELCOME TO VIRTUAL WORLD . I AM GROOVY , YOUR VIRTUAL ASSISTANCE";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

		char Pass[100];//password
		char query[100];//query
		char UserId[100];
		
		 do{
		 	cout<<"USER ID ->"<<endl;
		 		gets(UserId);
			if(strcmp( UserId,"CHOTKI LUNA")==0){
		   	 cout<<"ENTER YOUR PASSWORD"<<endl;
		 	 string phrase = "enter your password ";
             string command = "espeak \"" + phrase + "\"";
             const char *charCommand = command.c_str();
             system(charCommand);
		 	gets(Pass);//enter password by the user
		 	//opening any file
		 	STARTUPINFO startInfo {0};
		 	PROCESS_INFORMATION processInfo = {0};
		 	//password matching or not
		
				
		    	if(strcmp(Pass,"LUNA")==0){
		 		 cout<<"CORRECT PASSWORD"<<endl<<endl;
		 		 string phrase = "correct password";
                 string command = "espeak \"" + phrase + "\"";
                 const char *charCommand = command.c_str();
                 system(charCommand);
                  cout<<"__________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
				
		 		Wish();
		 		
		 		do{
				 cout<<"__________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
				 ////////////////////////////////////////////////////////////////
				 cout<<"HOW CAN I HELP YOU .PLEASE TELL ME "<<endl<<endl<<endl;
				    string phrase = "How can i help you . please tell me ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
				  
                   //////////////////////////////////////////////////////////////////////
				 cout<<"USER->";
				 gets(query);// get query from user
				 cout<<endl;
				 ////////////////////////////////////////////////////////////////////////////queries///////////////////////////////////////////
				if(strcmp(query, "please tell me your command list") == 0 || strcmp(query, "command list") == 0)
				 {
				 	 cout <<"YOU CAN TYPE ANY NUMBER FROM 1 TO 9 FOR FOLLOWING OPEATION \n";
				 	 string phrase = "YOU CAN TYPE ANY NUMBER  FROM  1 TO 9 FOR FOLLOWING OPEATION ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
				 	cout<<"THE COMMAND LIST IS :"<<endl<<" 1) hi or hey or hello"<<endl<<" 2) bye or stop or exit\n 3) date \n 4) open notepad\n 5) calculation\n 6) open google\n 7) open YouTube\n 8) open scaler\n 9) open gaana\n ";
			       
				}
				else  if(strcmp(query, "hi") == 0 || strcmp(query, "hey") == 0  || strcmp(query, "hello") == 0  || strcmp(query, "1") == 0  ){
				 	cout<<"HELLO CHOTKI LUNA..."<<endl;
				 	string phrase = "hello chotki luna";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
				 } else  if(strcmp(query, "bye") == 0 || strcmp(query, "stop") == 0  || strcmp(query, "exit") == 0  || strcmp(query, "2") == 0 ){
				 	cout<<"EXIT..\nHAVE A NICE DAY ..."<<endl;
				 	string phrase = "ok chotki luna! have a nice day ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
				 	exit(0);
		        	}else  if( strcmp(query,"time")==0 || strcmp(query, "date")==0  || strcmp(query, "3") == 0 ){
		        		date();
				    }else  if(( strcmp(query, "open notepad")==0 ) || strcmp(query, "4") == 0 ){
				        cout<<"OPENING NOTEPAD..."<<endl;
		                string phrase = "opening notepad";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
				    	CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		        		
				     }else  if(( strcmp(query, "calculation")==0 )  || strcmp(query, "5") == 0 ){
					    calc();
					
					}else  if(( strcmp(query, "open google")==0 )  || strcmp(query, "6") == 0){
				    	cout<<"OPENING GOGLE..."<<endl;
				            string phrase = "opening google";
                            string command = "espeak \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
				    	system("start https://www.google.com");
		        		
				    }  else  if(( strcmp(query, "open YouTube")==0 ) || strcmp(query, "7") == 0 ){
				    	cout<<"OPENING YouTube..."<<endl;
				    	    string phrase = "opening youtube";
                            string command = "espeak \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
				        	system("start https://www.youtube.com");
		        		
				    } else  if(( strcmp(query, "open scaler")==0 )  || strcmp(query, "8") == 0){
				    	cout<<"OPENING Scaler..."<<endl;
				    	    string phrase = "opening scaler";
                            string command = "espeak \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
				    	    system("start https://www.scaler.com");
		        		
				    } else  if(( strcmp(query, "open gaana")==0 ) || strcmp(query, "9") == 0 ){
				    	cout<<"OPENING Gaana..."<<endl;
				    	    string phrase = "opening gaana";
                            string command = "espeak \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
				    	    system("start https://www.gaana.com");
		        	}
				
				 else{
				 	cout<<"PLEASE ENTER VALID QUEARY"<<endl;
				 	    string phrase = "Oh! sorry I have not solution of your query.";
                        string command = "espeak \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
				 }
	

		   }while(1);
			 }
			 else{
			 	cout<<"INCORRECT PASSWORD"<<endl<<endl;
			 	  string phrase = "incorrect password.";
                  string command = "espeak \"" + phrase + "\"";
                  const char *charCommand = command.c_str();
                  system(charCommand);
			 }
	}else {
			cout<<"PLEASE ENTER CORRECT USER ID"<<endl<<endl;
			 	 string phrase = "Wrong User id, you are not chotki luna";
                 string command = "espeak \"" + phrase + "\"";
                 const char *charCommand = command.c_str();
                 system(charCommand);
	}
		 }while(1);
	
	return 0;
}

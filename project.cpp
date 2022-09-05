#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void assist(string s){
    string phrase = s;
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
	
}

//wishing function//////////////////////////////////////////////////////////
void Wish(){
	time_t now = time(0);
	tm *time = localtime(&now);
	if(time-> tm_hour <12){
	    cout<<"========================"<<endl;
		cout<<"GOOD MORNING "<<endl;
		cout<<"========================"<<endl<<endl;
         string s="Good Morning Boss";
        assist(s);

	}
	else if(time-> tm_hour >=12 && time-> tm_hour <16){
		cout<<"========================"<<endl;
		cout<<"GOOD AFTERNOON "<<endl;
		cout<<"========================"<<endl<<endl;
        string s="Good Afternoon Boss";
        assist(s);

	}
		else if(time-> tm_hour >=16 && time-> tm_hour <24){
		cout<<"========================"<<endl;
		cout<<"GOOD EVENING "<<endl;
		cout<<"========================"<<endl<<endl;
        string s="Good Evening Boss";
        assist(s);

	}
	
}


//date and time ///////////////////////////////////////////////////////
void date(){
	time_t now = time (0);
	char *dt = ctime(&now);
	cout<<"THE DATE AND TIME IS ..."<<endl<<dt<<endl;
    string s="THE DATE AND TIME IS ...";
    assist(s);

}
////////////////////////calculation///////////////////////////
void calc(){
	float n1,n2;
	char opr;
	cout<<"ENTER THE NUMBERS"<<endl;
    string s="ENTER THE NUMBERS...";
    assist(s);

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
	cout<<"\t\t\t\t\t\t\t\t\t WELCOME TO VIRTUAL WORLD . I AM GROOVY , YOUR VIRTUAL ASSISTANCE \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
	 cout<<"\t\t\t\t\t\t\t\t\t ---------------------------------------------------------------- \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl<<endl;
	 string s="WELCOME TO VIRTUAL WORLD . I AM GROOVY , YOUR VIRTUAL ASSISTANCE";
     assist(s);


		char Pass[100];//password
		char query[100];//query
		char UserId[100];
		
		 do{
		 	cout<<"USER ID ->"<<endl;
            string s="Please enter your UserId ";
             assist(s);

	 		gets(UserId);
             
			if(strcmp( UserId,"CHOTKI LUNA")==0){
		   	 cout<<"ENTER YOUR PASSWORD"<<endl;
             string s="enter your password ";
             assist(s);           

		 	gets(Pass);//enter password by the user
		 	//opening any file
		 	STARTUPINFO startInfo {0};
		 	PROCESS_INFORMATION processInfo = {0};
		 	//password matching or not
		
				
		    	if(strcmp(Pass,"LUNA")==0){
		 		 cout<<"CORRECT PASSWORD"<<endl<<endl;
                 string s="correct password";
                 assist(s); 

                  cout<<"__________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
				
		 		Wish();
		 		
		 		do{
				 cout<<"__________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;
				 ////////////////////////////////////////////////////////////////
                
				 cout<<"HOW CAN I HELP YOU .PLEASE TELL ME.PLEASE ENTER YOUR QUERY IN SMALL LETTERS. "<<endl<<endl<<endl;
                 string s="How can i help you . please tell me. please enter query in small letter. ";
                 assist(s);

				  
                   //////////////////////////////////////////////////////////////////////
				 cout<<"USER->";
				 gets(query);// get query from user
				 cout<<endl;
				 ////////////////////////////////////////////////////////////////////////////queries///////////////////////////////////////////
				if(strcmp(query, "please tell me your command list") == 0 || strcmp(query, "command list") == 0|| strcmp(query, "help") == 0)
				 {
				 	 cout <<"YOU CAN TYPE ANY NUMBER FROM 1 TO 9 FOR FOLLOWING OPEATION \n";
				 	 string s="YOU CAN TYPE ANY NUMBER  FROM  1 TO 10 FOR FOLLOWING OPEATION ";
                     assist(s);

				 	cout<<"THE COMMAND LIST IS :"<<endl<<" 1) hi or hey or hello"<<endl<<" 2) bye or stop or exit\n 3) date \n 4) open notepad\n 5) calculation\n 6) open google\n 7) open YouTube\n 8) open scaler\n 9) open gaana\n 10) open github\n ";
			       
				}
				else  if(strcmp(query, "hi") == 0 || strcmp(query, "hey") == 0  || strcmp(query, "hello") == 0  || strcmp(query, "1") == 0  ){
				 	cout<<"HELLO CHOTKI LUNA..."<<endl;
				 	string s="hello chotki luna ";
                 assist(s);

				 } else  if(strcmp(query, "bye") == 0 || strcmp(query, "stop") == 0  || strcmp(query, "exit") == 0  || strcmp(query, "2") == 0 ){
				 	cout<<"EXIT..\nHAVE A NICE DAY ..."<<endl;
                    string s="ok chotki luna! have a nice day ";
                    assist(s);

				 	exit(0);
		        	}else  if( strcmp(query,"time")==0 || strcmp(query, "date")==0  || strcmp(query, "3") == 0 ){
		        		date();
				    }else  if(( strcmp(query, "open notepad")==0 ) || strcmp(query, "4") == 0 ){
				        cout<<"OPENING NOTEPAD..."<<endl;
                        string s="opening notepad ";
                        assist(s);                       

				    	CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		        		
				     }else  if(( strcmp(query, "calculation")==0 )  || strcmp(query, "5") == 0 ){
					    calc();
					
					}else  if(( strcmp(query, "open google")==0 )  || strcmp(query, "6") == 0){
				    	cout<<"OPENING GOGLE..."<<endl;
                        string s="opening google";
                        assist(s);               

				    	system("start https://www.google.com");
		        		
				    }  else  if(( strcmp(query, "open YouTube")==0 ) || strcmp(query, "7") == 0 ){
				    	cout<<"OPENING YouTube..."<<endl;
                            string s="opening youtube ";
                            assist(s);               
				        	system("start https://www.youtube.com");
		        		
				    } else  if(( strcmp(query, "open scaler")==0 )  || strcmp(query, "8") == 0){
				    	cout<<"OPENING Scaler..."<<endl;
				    	    string phrase = "opening scaler";
                            assist(phrase);                  
                         
				    	    system("start https://www.scaler.com");
		        		
				    } else  if(( strcmp(query, "open gaana")==0 ) || strcmp(query, "9") == 0 ){
				    	cout<<"OPENING Gaana..."<<endl;
				    	    string phrase = "opening gaana";
                             assist(phrase);                  
				    	    system("start https://www.gaana.com");
		        	}else  if(( strcmp(query, "open github")==0 ) || strcmp(query, "10") == 0 ){
				    	cout<<"OPENING Github..."<<endl;
				    	    string phrase = "opening github";
                            assist(phrase);                  
                            
				    	    system("start https://www.github.com");
		        	}
				
				 else{
				 	cout<<"PLEASE ENTER VALID QUEARY"<<endl;
				 	    string phrase = "Oh! sorry I have not solution of your query.";
                        assist(phrase);
				 }
	

		   }while(1);
			 }
			 else{
			 	cout<<"INCORRECT PASSWORD"<<endl<<endl;
			 	  string phrase = "incorrect password.";
                  assist(phrase);
                  
			 }
	}else {
			cout<<"PLEASE ENTER CORRECT USER ID"<<endl<<endl;
			 	 string phrase = "Wrong User id, you are not my boss";
                 assist(phrase);
	}
		 }while(1);
	
	return 0;
}
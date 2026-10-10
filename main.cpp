#include <iostream>
using namespace std;
int main (){
	string UserName;	
	string password;	
		
	string CorrectUserName = "Fordjour";
	string Correctpassword = "afp@68";
	
	
//correct user name
	cout<<"Enter user name: ";	
	cin>>UserName;
	  
//correct password
	cout<<"Enter password: ";
	cin>>password;
	
	if(UserName == CorrectUserName && password == Correctpassword) {
		cout<<"\nLogin successful";
		
	}
	
	else{
		cout<<"\nAccess denied.\n";
	}
	
	
	
	
	return 0;
}
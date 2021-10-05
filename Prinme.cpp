#include<iostream>
#include<string>
using namespace std;
int main(){
	int n; 
	string str;
	do{
		cout <<"Enter your number : ";
		cin>>n;
		if((n==1 || n%2 == 0 || n%3 == 0 || n%5==0 || n%7==0) 
       		&& (n!=2 && n!=3 && n!=5 && n!=7)){
       	 		cout<<"NotPrime";
        
   		}else{
    		cout<<"Prinme";
		}
		cout<<"\n\nEnter std ExitProgram End : ";
		cin>>str;
		system ("CLS");
	}while(str !="End");
		
	
 	return 0;   
}

#include <iostream>
using namespace std;
int main (){
	int LeftOperand,RightOperand;
	char Operator,Choice;
	int Result;
	char text;
	do{
		cout << " Choice " << endl;
		cout<<" 1.Switch "<<endl<<" 2.IF"<<endl<<endl;
		cout<<"Enter your Choice : ";
		cin>>Choice;
		cout<<endl;
		switch(Choice){
			case'1':
			cout<<"Enter your number : ";
			cin>>LeftOperand>>Operator>>RightOperand;
			cout<<endl;
			switch(Operator){
				case'+':
				Result=LeftOperand+RightOperand;
				break;
				case'-':
				Result=LeftOperand-RightOperand;
				break;
				case'*':
				Result=LeftOperand*RightOperand;
				break;
				case'/':
				Result=LeftOperand/RightOperand;
				break;
				default : cout << Operator << " is unrecognized operation.";
 				cout << endl;
 				return 1;
			}
			cout << LeftOperand << " " << Operator << " ";
			cout << RightOperand << " equals " << Result;

			break;
			case'2':
				cout<<"Enter your number : ";
				cin>>LeftOperand>>Operator>>RightOperand;
				if(Operator=='+'){
					Result=LeftOperand+RightOperand;
					cout << LeftOperand << " " << Operator << " ";
					cout << RightOperand << " equals " << Result;
				}else
				if(Operator=='-'){
					Result=LeftOperand+RightOperand;
					cout << LeftOperand << " " << Operator << " ";
					cout << RightOperand << " equals " << Result;
				}else
				if(Operator=='*'){
					Result=LeftOperand+RightOperand;
					cout << LeftOperand << " " << Operator << " ";
					cout << RightOperand << " equals " << Result;
				}else
				if(Operator=='/'){
					Result=LeftOperand+RightOperand;
					cout<<endl;
					cout << LeftOperand << " " << Operator << " ";
					cout << RightOperand << " equals " << Result;
				}else{
					cout << Operator << " is unrecognized operation.";
				}
			break;
			
	}
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
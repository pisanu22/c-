#include <iostream>
using namespace std;
int main (){
	int project,midterm,final,sum=0,i=0;
	for(int l=1;l<=3;l++){
	cout<<"Enter Project score : ";
	cin>>project;
	cout<<"Enter Midterm score : ";
	cin>>midterm;
	cout<<"Enter Final score : ";
	cin>>final;
	if(project<=20){
		i++;
	}else{
		cout<<"Project score Error !!!"<<endl;
	}
	if(midterm<=30){
		i++;
	}else{
		cout<<"Midterm score Error !!!"<<endl;
	}
	if(final<=50){
		i++;
	}else{
		cout<<"Final score Error !!!"<<endl;
	}
	if(i==3){
		sum=project+midterm+final;
	}
	cout<<"Total Score : "<<sum<<endl;
	cout<<"Grade : ";
	if(i==3){
	if(sum>=80){
		cout<<"A"<<endl;
	}else if(sum >=70){
		cout<<"B"<<endl;
	}else if(sum >=60){
		cout<<"C"<<endl;
	}else if(sum >=50){
		cout<<"D"<<endl;
	}else if(sum <50){
		cout<<"F"<<endl;
	}
}
	i=0;
}
	return 0;
}

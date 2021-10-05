#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum,n,Prime; 
    cout <<"Enter your number : ";
    cin>>n;
    for(int i=2;i<=n;i++){
        Prime=1;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                Prime=0;
            }
        }
        if(Prime !=0){
            //cout<<i;
                sum=sum+i;
                cout<<"Sum : " <<sum<<" //  I : "<<i;
                cout<<endl;

        }
    }
}
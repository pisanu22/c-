#include <iostream>
using namespace std;
int main()
{
   int leapyear;
   cout << "\nEnter year  : ";
   cin >> leapyear;
   if ((leapyear / 4,100,400)==0){
            cout << "Year " << leapyear << " is leap year";
           
   }
   else{ 
            cout << "Year " << leapyear << " is not leap year ";
           
   }
   
   return(0);


   
}
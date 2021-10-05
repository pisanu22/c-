#include <iostream>
#include <string>
using namespace std;
int main()
{
  char ch;
  cout << "\nEnter a charater : ";
  cin >> ch;
  cout << endl;
  if(ch >='a'&&ch <='z')
        cout << ch << " is lower character.";
  else if(ch>='A'&&ch<='Z')
        cout << ch << " is upper charater.";
  else if(ch >='0'&&ch <='9')
        cout << ch << "is numeric.";
   else cout << ch << " is special charecter.";
   cout << endl;
   return(0);     
   
}
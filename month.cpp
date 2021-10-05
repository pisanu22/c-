#include <iostream>
#include <string>
using namespace std;
int main()
{
    int choise;
    cout << "Enter MONTH NUMBER";
    cin >> choise;
    if(choise == 1)
    cout << choise  << " January "; 
    else if(choise == 2)
    cout << choise  << " February "; 
    else if(choise == 3)
    cout << choise  << " March "; 
    else if(choise == 4)
    cout << choise  << " April  "; 
    else if(choise == 5)
    cout << choise  << " May  "; 
    else if(choise == 6)
    cout << choise  << " June  "; 
    else if(choise == 7)
    cout << choise  << " July  "; 
    else if(choise == 8)
    cout << choise  << " August   "; 
    else if(choise == 9)
    cout << choise  << " September   "; 
    else if(choise == 10)
    cout << choise  << " October    "; 
    else if(choise == 11)
    cout << choise  << " November    "; 
    else if(choise == 12)
    cout << choise  << " December   "; 
    else 
    cout << "Not Value ";
    cout << endl;
    return(0);
}
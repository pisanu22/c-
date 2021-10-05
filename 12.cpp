#include <iostream>
#include <string>
using namespace std;
int main()
{
    int gg;
    cout << "Enter Number";
    cin >> gg;
    if(gg > 0)
    cout << gg << "\nNumber is positive";
    else if(gg == 0)
    cout << gg << "\nNumber is zero";
    else if(gg < 0)
    cout << gg << "\nNumber is Negative";
    cout << endl;
    return(0);

    
}
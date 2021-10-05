#include <iostream>
#include <string>
using namespace std;
int main()
{
    float Price, Tex, Total, Tax_Rate = 0.07f;
    string ProductName;
    cout << "Enter product name : ";
    cin >> ProductName;
    cout << "Enter product price : ";
    cin >> Price;
    cout << endl;
    //case1
    Tex = Price * Tax_Rate;
    Total = Price + Tex;
    //case2
    //Total = Price + Price* Tex_Rage
    cout << "Price of " << ProductName << " = " << Price << endl;
    cout << "Tex(%7) ofv " << ProductName << " = " << Tex << endl;
    cout << "Total Price of" << ProductName << " = " << Total << endl;
    return (0);
}
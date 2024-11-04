//3. Sales Tax
#include <iostream>
using namespace std ;

int main ()
{
    int salestax ;
    double statetax = 0.04 ;
    double countytax = 0.02 ;

    cout << "Enter sales tax : $ " ;
    cin >> salestax ;
    double totalstate = salestax*statetax ;
    double totalcounty = salestax*countytax ;
    double total = totalstate + totalcounty + salestax ;
    cout << "\nThe total state sales tax : $" << totalstate << endl ;
    cout << "\nThe total county sales tax : $" << totalcounty << endl;
    cout << "\nTotal sales tax : $ " << total ;
}
//9. Stock Commision
#include <iostream>

using namespace std ;

int main ()
{
    double commision = 0.02, shareprice = 35.00 ;
    int amountshare = 750 ;
    double amountpaid = shareprice*amountshare;
    cout << "The amount paid for the stock alone : RM " << amountpaid << endl;
    double amountcommision = commision*amountpaid;
    cout << "The amount of the commision : RM " << amountcommision << endl;
    double totalpaid = amountpaid+amountcommision;
    cout << "The total amount paid : RM " << totalpaid << endl;
}
//4. Restaurant Bill
#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    const double tax = 0.0675;
    const double tip = 0.2;
    double mealcost , totaltax , totaltip , totalbill ;
    cout << "Enter the meal cost : $" ;
    cin >> mealcost ;
    totaltax = mealcost*tax ;
    totaltip = tip*totaltax;
    totalbill = mealcost + totaltax + totaltip ;
    cout << setprecision(3);
    cout << "\nThe meal cost : $" << mealcost << endl ;
    cout << "\nThe tax amount : $" << totaltax << endl;
    cout << "\nThe tip amount : $" << totaltip << endl;
    cout << "\nThe total bill : $" << totalbill << endl;
    return 0 ;
}
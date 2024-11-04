//10. Currency
#include <iostream>
#include <iomanip>

using namespace std ;

int main ()
{
    double dollar ;
    cout << "\nEnter number in dollar : "  ;
    cin >> dollar ;
    const double yenperdollar = dollar*98.93 ;
    const double europerdollar = dollar*0.74 ;

    // num formatted in fixed-point notation, with two decimal point of precision.
    cout << fixed << setprecision(2) ;
    cout << dollar << " Dollar : " << yenperdollar << " Yen" << endl ;
    cout << dollar << " Dollar : " << europerdollar << " Euros" << endl ;
}
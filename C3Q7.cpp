//7. Celcius to Fahrenheit
#include <iostream>

using namespace std ;

int main ()
{
    double Fahrenheit, Celsius;

    cout << "\nEnter temperatures in celsius : "  ;
    cin >> Celsius ;

    //Convert celsius to fahrenheit
    Fahrenheit = (9.0/5.0)*Celsius + 32 ;

    cout << "\n" << Celsius << " C in Fahrenheit is : " << Fahrenheit << " F" << endl ;
}
//9. Angle Calculator
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;

int main ()
{
    double anglerad ;
    cout << "\nEnter an angle in radians : "  ;
    cin >> anglerad ;
    
    double sinval = sin(anglerad) ;
    double cosval = cos(anglerad) ;
    double tanval = tan(anglerad) ;

    // fixed-point notation with 4 decimal places
    cout << fixed << setprecision(4) ;

    cout << "\nThe sine of the angle : " << sinval << endl 
         << "The cosine of the angle : " << cosval << endl
         << "The tangent of the angle : " << tanval << endl ;
}
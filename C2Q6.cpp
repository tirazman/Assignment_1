//7. Ocean Levels
#include <iostream>
using namespace std ;

int main ()
{
    double riserate = 1.5 ;
    double rise5y = riserate*5;
    double rise7y = riserate*7;
    double rise10y = riserate*10;
    
    cout << "The number of " << rise5y << " milimeters higher than the current level that the ocean's level will be in 5 years." ;
    cout << "The number of " << rise7y << " milimeters higher than the current level that the ocean's level will be in 7 years." ;
    cout << "The number of " << rise10y << " milimeters higher than the current level that the ocean's level will be in 10 years." ;
}
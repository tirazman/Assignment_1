//8. Pizza Pi
#include <iostream>
#include <cmath>

using namespace std ;

int main ()
{
    const double PI = 3.14159 ;
    const double slicearea = 14.125 ;
    double diameter, rad, area, nslice ;

    cout << "\nEnter the diameter of the pizza in inches : "  ;
    cin >> diameter ;

    //divide diameter by2 to get radius
    rad = diameter/2 ;

    area = PI*pow(rad,2) ;
    //divide the area of the pizza by each slice area
    nslice = area/slicearea ; 
   
    cout << "\nThe number of slices for the pizza is : " << nslice << endl ;
}
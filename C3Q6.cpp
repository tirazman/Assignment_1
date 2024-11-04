//6. How Many Calories?
#include <iostream>
using namespace std ;

int main ()
{
    int ncookie ;

    cout << "\nEnter number of cookies you ate : "  ;
    cin >> ncookie ;
    
    const int cookiebag = 30 ;
    
    //divide by 10 servings in a bag
    int cookieps = cookiebag/10 ;
    const int aserving = 300 ; 
    int calorieps = aserving/cookieps ;

    int calorie = ncookie*calorieps ;

    cout << "Total calories consumed : " << calorie << endl ;
}
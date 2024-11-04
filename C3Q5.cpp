//4. Males & Females Percentages
#include <iostream>

using namespace std ;

int main ()
{
    int nMales, nFemales ;
    double mpercent , fpercent ; 

    cout << "\nEnter number of males : "  ;
    cin >> nMales ;
    cout << "Enter number of females : "  ;
    cin >> nFemales ;
   
    int totalstudent = nMales + nFemales ;

    mpercent = static_cast<double>(nMales)/totalstudent*100 ;
    fpercent = static_cast<double>(nFemales)/totalstudent*100 ;

    cout << "\nThe percentage of males in the class is : " << mpercent << "%" << endl ;
    cout << "The percentage of females in the class is : " << fpercent << "%" << endl ;
}
//4. Stadium Seating
#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    double classA = 15.0 , classB = 12.0 , classC = 9.0 ;
    int nclassA , nclassB , nclassC ;
    
    cout << "\nEnter number of Class A ticket sold : " ;
    cin >> nclassA ;
    cout << "\nEnter number of Class B ticket sold : " ;
    cin >> nclassB ;
    cout << "\nEnter number of Class C ticket sold : " ;
    cin >> nclassC ;

    double ticketA = classA*nclassA ;
    double ticketB = classB*nclassB ;
    double ticketC = classC*nclassC ;

    // fixed-point notation with one decimal places 
    cout << fixed << setprecision(1); 
    double totalincome = ticketA + ticketB + ticketC ;

    cout << "Total amount of income generated from ticket sales : RM " << totalincome << endl ;
}
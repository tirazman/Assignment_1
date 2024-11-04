//2. Box Office
#include <iostream>
using namespace std ;

int main ()
{
    int adult, child ;
    string moviename ;
    double priceadult = 10.0 , pricechild = 6.0;
    
    cout << "\nEnter the movie name : " ;
    cin >> moviename ;
    cout << "\nEnter number of adult tickets sold : ";
    cin >> adult ;
    cout << "\nEnter number of child tickets sold : " ;
    cin >> child ;

    double grossprofit = (priceadult*adult)+(pricechild*child);
    //the theater keeps 20% of the gross profit
    double netprofit = grossprofit*0.2 ; 
    double amountpaid = grossprofit-netprofit;

    cout << "Movie Name : " << moviename << endl
         << "Adult Tickets Sold : " << adult << endl
         << "Child Tickets Sold : " << child << endl
         << "Gross Box Office Profit : $ " << grossprofit << endl
         << "Net Box Office Profit : $ " << netprofit << endl
         << "Amount Paid to Distributor : $ " << amountpaid << endl ;
}
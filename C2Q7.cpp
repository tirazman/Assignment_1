//7. Total Purchase
#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;

    cout << "Price of item 1 : RM " << item1 << "\n" ;
    cout << "Price of item 2 : RM " << item2 << "\n" ;
    cout << "Price of item 3 : RM " << item3 << "\n" ;
    cout << "Price of item 4 : RM " << item4 << "\n" ;
    cout << "Price of item 5 : RM " << item5 << "\n" ;
    cout << setprecision(3);
    double subtotal = item1+item2+item3+item4+item5;
    cout << "The subtotal of the sale : RM " << subtotal << "\n";
    double salestax = 0.07;
    double totaltax = subtotal*salestax;
    cout << "The amount of sales tax : RM " << totaltax << "\n";
    double total = subtotal+totaltax;
    cout << "The total : RM " << total << "\n";
}
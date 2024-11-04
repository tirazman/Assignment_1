//1. Test Average 
#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
    int score1, score2, score3, score4, score5 ;
   
    cout << "Enter test score 1 : " ;
    cin >> score1 ;
    cout << "Enter test score 2 : ";
    cin >> score2 ;
    cout << "Enter test score 3 : " ;
    cin >> score3 ;
    cout << "Enter test score 4 : " ;
    cin >> score4 ;
    cout << "Enter test score 5 : " ;
    cin >> score5 ;

    // num formatted in fixed-point notation, with one decimal point of precision.
    cout << fixed << setprecision(1);
    double sum = score1+score2+score3+score4+score5 ;
    double avg = sum/5 ;
    cout << "\nThe average test score : " << avg << endl;
}
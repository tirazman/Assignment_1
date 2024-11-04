//3. Words Game
#include <iostream>
using namespace std ;

int main ()
{
    int age ;
    string name, cityname, college, profession, animal, petname ;
    
    
    cout << "Enter your name : " ;
    cin >> name ;
    cout << "Enter your age : ";
    cin >> age ;
    cout << "Enter your city name : " ;
    cin >> cityname ;
    cout << "Enter your college name : ";
    cin >> college ;
    cout << "Enter a profession : " ;
    cin >> profession ;
    cout << "Enter a type of animal : ";
    cin >> animal ;
    cout << "Enter a pet's name : ";
    cin >> petname ;


    cout << "\nThere once was a person named " << name 
         << " who lived in " << cityname 
         << ". At the age of " << age 
         << ", " << name
         << " went to college at " << college 
         << ". " << name << " graduated and went to work as a " << profession 
         << ". Then, " << name << " adopted a(n) " << animal 
         << " named " << petname << ". They both lived happily ever after!";
}
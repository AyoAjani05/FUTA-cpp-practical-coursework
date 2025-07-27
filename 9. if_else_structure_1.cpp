// WRITE A PROGRAM TO FIND OUT WHETHER A GIVEN NUMBER IS NEGATIVE OR POSITIVE
#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a number: ";
    int x; // VARIABLE DECLARATION 
    cin >> x; // VARIABLE ASSIGNMENT FROM USER INPUT
    
    if (x < 0)
    {
        cout << "Negative"; 
    }
    else
    {
        cout << "Positive";
    }
    return 0;
}
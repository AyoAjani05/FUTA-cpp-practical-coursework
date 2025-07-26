// INCREMENT AND DECREMENT OPERATORS
#include <iostream>

using namespace std;

int main()
{
    //[DATA TYPE] VARIABLE NAME;
    int A, B; // VARIABLE DECLARATION
    A = 5; // VARIABLE ASSIGNMENT
    B = 10; // VARIABLE ASSIGNMENT

    // Increment Operator
    cout << "The Value of "<<A++<<"++ is: "<<(A)<<endl; //5++ = 6
    cout << "The Value of "<<B++<<"++ is: "<<(B)<<endl; //10++ = 11

    // Decrement Operator
    cout << "The Value of "<<A--<<"-- is: "<<(A)<<endl; //6-- = 5
    cout << "The Value of "<<B--<<"-- is: "<<(B)<<endl; //11-- = 10
    return 0;
}
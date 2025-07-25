// LOGICAL OPERATORS
#include <iostream>

using namespace std;

int main()
{
    //[DATA TYPE] VARIABLE NAME;
    bool A=true, B=false; // VARIABLE DECLARATION AND ASSIGNMENT

    // Logical AND Operator
    cout << "The Value of "<<A<<" AND "<<B<<" is: "<<(A&&B)<<endl; //(A&&B) is FALSE

    // Logical OR Operator
    cout << "The Value of "<<A<<" OR "<<B<<" is: "<<(A||B)<<endl; //(A||B) is TRUE

    // Logical NOT Operator
    cout << "The Value of NOT "<<A<<" is: "<<(!A)<<endl; //(!A) is FALSE
    cout << "The Value of NOT "<<B<<" is: "<<(!B)<<endl; //(!B) is TRUE
    return 0;
}
// ARITHMETIC OPERATORS
#include <iostream>

using namespace std;

int main()
{
    //[DATA TYPE] VARIABLE NAME;
    int A=10, B=20; // VARIABLE DECLARATION AND ASSIGNMENT
    // Addition Operator
    cout << "The Value of "<<A<<" + "<<B<<" is: "<<(A+B)<<endl; //10 + 20 = 30

    // Subtraction Operator
    cout << "The Value of "<<A<<" - "<<B<<" is: "<<(A-B)<<endl; //10 - 20 = -10

    // Multiplication Operator
    cout << "The Value of "<<A<<" * "<<B<<" is: "<<(A*B)<<endl; //10 * 20 = 200

    // Division Operator
    cout << "The Value of "<<B<<" / "<<A<<" is: "<<(B/A)<<endl; //20 / 10 = 2

    // Modulus Operator
    cout << "The Value of "<<A<<" % "<<B<<" is: "<<(A%B)<<endl; //10 % 20 = 10

    // Increment Operator
    cout << "The Value of "<<A++<<"++ is: "<<(A)<<endl; //10++ = 11
    cout << "The Value of "<<B++<<"++ is: "<<(B)<<endl; //20++ = 21

    // Decrement Operator
    cout << "The Value of "<<A--<<"-- is: "<<(A)<<endl; //11-- = 10
    cout << "The Value of "<<B--<<"-- is: "<<(B)<<endl; //21-- = 20
    return 0;
}
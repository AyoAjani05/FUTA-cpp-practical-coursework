// ASSIGNMENT OPERATORS
#include <iostream>

using namespace std;

int main()
{
    //[DATA TYPE] VARIABLE NAME;
    int A=10, B=20; // VARIABLE DECLARATION AND ASSIGNMENT
    int C;

    // Assignment Operator
    C = A + B; //C = 30
    cout << "The Value of C is: "<<(C)<<endl; 

    // Addition AND Assignment Operator
    A += B; //A = A + B (A = 30)
    cout << "The Value of A is: "<<(A)<<endl; 

    // Subtraction AND Assignment Operator
    B -= A; //B = B - A (B = -10)
    cout << "The Value of B is: "<<(B)<<endl; 

    // Multiplication AND Assignment Operator
    A *= B; //A = A * B (A = -300)
    cout << "The Value of A is: "<<(A)<<endl; 

    // Division AND Assignment Operator
    B /= A; //B = B / A (B = 0) 
    cout << "The Value of B is: "<<(B)<<endl; 

    // Modulus AND Assignment Operator
    B = 1; // Assigning B a new value to avoid arithmetic error
    B %= A; //B = B % A (B = 1) 
    cout << "The Value of B is: "<<(B)<<endl; 
    return 0;
}
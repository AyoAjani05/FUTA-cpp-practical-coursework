// BITWISE OPERATORS
#include <iostream>

using namespace std;

int main()
{
    //[DATA TYPE] VARIABLE NAME;
    int A=60, B=13; // VARIABLE DECLARATION AND ASSIGNMENT

    // Binary AND Operator
    cout << "The Value of "<<A<<" BINARY AND "<<B<<" is: "<<(A&B)<<endl; //(A&B) is 12

    // Binary OR Operator
    cout << "The Value of "<<A<<" BINARY OR "<<B<<" is: "<<(A|B)<<endl; //(A|B) is 61

    // Binary XOR Operator
    cout << "The Value of "<<A<<" BINARY XOR "<<B<<" is: "<<(A^B)<<endl; //(A^B) is 49

    // Binary COMPLEMENT Operator
    cout << "The Value of the BINARY COMPLEMENT of A is: "<<(~A)<<endl; //(~A) is -61
    cout << "The Value of the BINARY COMPLEMENT of B is: "<<(~B)<<endl; //(~B) is -14

    // Binary LEFT SHIFT Operator
    cout << "The Value of the BINARY LEFT SHIFT of A by 2 is: "<<(A<<2)<<endl; //(A<<2) is 240
    cout << "The Value of the BINARY LEFT SHIFT of B by 2 is: "<<(B<<2)<<endl; //(B<<2) is 52

    // Binary RIGHT SHIFT Operator
    cout << "The Value of the BINARY RIGHT SHIFT of A by 2 is: "<<(A>>2)<<endl; //(A>>2) is 15
    cout << "The Value of the BINARY RIGHT SHIFT of B by 2 is: "<<(B>>2)<<endl; //(B>>2) is 3

    // SIZEOF Operator
    cout << "The Size of the Variable A is: "<<(sizeof(A))<<endl; //sizeof(A) is 4
    cout << "The Size of the Variable B is: "<<(sizeof(B))<<endl; //sizeof(A) is 4
    return 0;
}
// Pointer is special type of variable that stores address of another variable!

#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int *ptr = &n; // Pointer to an integer variable

    float f = 10.5;
    float *ptr2 = &f;   // Pointer to a float variable

    cout << ptr << " = " << &n << endl;  // Output the address stored in ptr and the address of n
    cout << ptr2 << " = " << &f << endl;  // Output the address stored in ptr2 and the address of f
    return 0;
}
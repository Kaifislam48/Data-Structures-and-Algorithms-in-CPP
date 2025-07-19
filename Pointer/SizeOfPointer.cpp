#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int *ptr = &n;

    cout << "Size of Pointer: " << sizeof(ptr) << endl;


    float pi = 3.14;
    float *ptr2 = &pi;

    cout << "Size of Pointer to float: " << sizeof(ptr2) << endl;
    return 0;
}
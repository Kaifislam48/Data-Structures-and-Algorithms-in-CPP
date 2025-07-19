#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int *ptr = &n;

    int ** ptrToPtr = &ptr;

    cout << ptrToPtr << " = " << &ptr << endl;  
    return 0;
}
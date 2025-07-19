#include <iostream>
using namespace std;

void changeA(int &n){
    n = 20;
    cout << n << endl; 
}

int main(){
    int n = 10;
    changeA(n);
    cout << n << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x = 10;
    float p = 5.5; 
    cout << &x << endl;
    cout  << &p << endl;
    int *xptr = &x;
    cout << xptr << endl;
    // address to the pointer varibale
    cout << &xptr << endl;
    //pointer to a pointer
    int ** xptre = &xptr;
    //dereference operator
    cout << *xptre << endl;

    return 0;
}
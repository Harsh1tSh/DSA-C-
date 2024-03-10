#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the number you want to negate: ";
    cin >> x;
    cout << (~x) << endl;

    return 0;
}
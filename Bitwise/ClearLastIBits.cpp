#include<iostream>
using namespace std;

void ClearLastIBits(int &n,int i){
    int mask = (-1<<i);
    n = n & mask;
}

int main(){
    int n = 15;
    int i=2;
    ClearLastIBits(n,i);
    cout << n << endl;

    return 0;
}
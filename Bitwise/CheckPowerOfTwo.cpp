#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if((n & (n-1))==0){
        cout << "The number is a power of 2" << endl;
    }
    else{
        cout << "The number is not a power of 2" << endl;
    }

}
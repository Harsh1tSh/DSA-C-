#include<iostream>
using namespace std;

void printNumber(int n){
    if(n<=100){
        cout << n << " "; 
        printNumber(n+1);
    }
}

int main(){
    int start = 1;
    printNumber(start);
    return 0;
}
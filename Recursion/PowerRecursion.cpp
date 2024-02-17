#include<iostream>
using namespace std;

int pow(int a, int n){
    if(n==0){
        return 1;
    }
    return a * pow(a,n-1);
}

int fastPow(int a,int n){
    if(n==0){
        return 1;
    }
    int subProb = fastPow(a,n/2);
    int subPowsq = subProb * subProb;
    if(n&1){
        return a * subPowsq;
    }
    return subPowsq;
}

int main(){
    int a,n;
    cin >> a >> n;
    cout << pow(a,n);
    cout << fastPow(a,n);
    return 0;
}
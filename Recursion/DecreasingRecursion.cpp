#include<iostream>
using namespace std;

void DecreasingOrdr(int n){
    // base case 
    if(n==0){
        return;
    }
    cout << n << ", ";
    DecreasingOrdr(n-1);
}

void IncreasingOrdr(int n){
    if(n==0){
        return;
    }
    IncreasingOrdr(n-1);
    cout << n  << " ," ;
}
int main(){
    int n;
    cin >> n ;
    DecreasingOrdr(n) ;
    cout << endl;
    IncreasingOrdr(n);

    return 0;

}
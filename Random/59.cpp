#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << arr << endl;

    for(int i=0;i<n;i++){
        arr[i] = i;
        cout << arr[i] << " ";
    }
    delete [] arr;

    cout << arr << endl;
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> arr = {1,2,3,4,5};
    //fill constructor
    vector<int> arr(10,7);

    arr.push_back(15);
    for(int i = 0;i<arr.size(); i++){
        cout << arr[i] <<endl;
    }
    arr.pop_back();
    for(int i = 0;i<arr.size(); i++){
        cout << arr[i] <<endl;
    }

    cout << arr.size() << endl;

    cout << arr.capacity() << endl;


    return 0;
}
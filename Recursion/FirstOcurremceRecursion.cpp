#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    // base case
    if(n==0){
        return -1;
    }
    // rec case
    if(arr[0]==key){
        return 0;
    }
    int subIndex = firstOcc(arr +1,n-1,key);
    if(subIndex!=-1){
        return subIndex + 1;
    }
    return -1;

}

int LastOcc(int arr[], int n, int key){
    // base case
    if(n==0){
        return -1;
    }
    // rec case
    int subIndex = LastOcc(arr +1,n-1,key);
    if(subIndex==-1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else {
        return subIndex + 1;
    }

}

int AllOcc(int arr[], int n, int key){
    if(n==0){
        return 0;
    }
    // rec case
    int subcount = AllOcc(arr +1,n-1,key);
    if(arr[0]==key){
        return 1 + subcount;
    }
    else{
        return subcount;
    }
    
}


int main(){
    int arr[] = {1,3,5,7,6,2,11,7,21};
    int n = sizeof(arr)/sizeof(int);
    int key = 7;
    cout << firstOcc(arr,n,key) << endl;
    cout << LastOcc(arr,n,key) << endl;
    cout << AllOcc(arr,n,key);
    return 0;
}
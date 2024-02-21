#include<iostream>
using namespace std;

int largestElement(int arr[],int n){
    int max = arr[0];
  
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
    
int main(){
    int arr[] = {-3,4,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout << largestElement(arr,n) << endl;
    
    return 0;
}
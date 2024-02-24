#include<iostream>
#include<Windows.h>
using namespace std;

void printSubarrays(int arr[],int n){
    int largestsum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraysum = 0;

            for(int k=i; k<=j; k++){

                subarraysum += arr[k];
            }
            largestsum = max(largestsum,subarraysum);

            
            
        }
        
    }
    return largestsum;

  

}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    printSubarrays(arr,n);

    
    return 0;


}
#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr){
    int largestEle = INT_MIN;
    for(auto element : arr){
        largestEle = max(largestEle,element);
    }
    return largestEle;
    
}
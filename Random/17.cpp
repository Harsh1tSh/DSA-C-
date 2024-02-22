#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr){
    bool allNeg = true;
    int largest = INT_MIN;
// iterate over the entire arrray
    for(int x : arr){
        if(x > 0){
            allNeg = false;
        }
        largest = max(largest,x);
    }
    if(allNeg){
        return largest;
    }
    int cs = 0;
    int ans = 0;
    for(int x:arr){
        cs = cs + x;
        if(cs<0){
            cs= 0;
        }
        ans = max(ans,cs);
    }
    return ans;


}
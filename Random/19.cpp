#include<bits/stdc++.h>
using namespace std;

pair<int,int> closestSum(vector<int> arr, int x){
    int n = arr.size();
    int s = 0; 
    int e = n-1;
    int left,right;
    int diff = INT_MAX;

    while(s<e){
        int cs = arr[s] + arr[e];
        //update the difference
        if(abs(cs - x) < diff){
            left = s;
            right = e;
            diff = abs(cs - x);
        }
        if(cs > x){
            e--;
        }
        else{
            s++;
        }

    }
    return {arr[left],arr[right];}
}
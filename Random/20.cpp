#include<bits/stdc++.h>
using namespace std;

vector<int> Krotate(vector<int> a,int k){
    int n =a.size();
    k = k % n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i<k){
            ans.push_back(a[i+n-k]);
        }
        else{
            ans.push_Back(a[i-k]);
        }
    }
    return ans;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> Krotate(vector<int> a,int k){
    int n =a.size();
    k = k % n;
    reverse(a.begin(),a.begin() + n-k);//end is not included 
    reverse(a.begin() + n-k,a.end());//just like range(1,n)
    reverse(a.begin(),a.end());//result will be shown upto n
    return a;
    
}

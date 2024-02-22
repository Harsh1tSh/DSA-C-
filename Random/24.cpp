#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
  
    int n=v.size();
    int flag=0;
    
    for(i=0;i<n;i++){
        if(v[i]>v[i+1]){
            flag = -1;
        }
    }
    if(flag == 0){
        return v;
    }
    else{
        for(int t =1;t < n-1;t++){
            for(int j =0;j<n-1-t;j++){
                if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                }
            }
        }
        return v;
    }
    

}
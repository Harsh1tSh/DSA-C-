#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val){
    for(int x:A){
        if(x=Val){
            return Val;
        }
        else if(Val<min(x)){
            return -1;
        } 
        else()
    }
    
}

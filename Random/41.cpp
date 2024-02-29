#include<bits/stdc++.h>
using namespace std;
bool arePermutation(string A, string B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if(A.length() != B.length())
    return false;
    else if(A==B)
    return true;
}
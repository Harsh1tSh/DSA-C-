#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int length=str.size();
    bool temp=true;
    int s=0;
    int e=length-1;
    while(s<e)
    {
        if(str[s]!=str[e])
        {
        temp=false;
        break;
        }
        s++;
        e--;
    }
    return temp;
}
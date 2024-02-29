#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string duplicates(string str){
    int n = str.length();
    string output;
    for(int i=0;i<n;i++){
        while(i<n-1 and str[i+1]==str[i]){
            i++;
        }
        if(output.empty() || output.back() != str[i]){
            output += str[i];
        }
    }
    sort(output.begin(),output.end());
    return output;
}

int main(){
    string A = "baaabaabaaaaacddd";
    cout << duplicates(A) << endl;
    return 0;
}
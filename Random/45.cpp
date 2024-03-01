#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string removeDuplicate(string s){
    sort(s.begin(),s.end());
    s+='*';
    string temp;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            temp+=s[i];
        }
    }
    return temp;
    
}
int main() {
    string inputString = "baaabaabaaaaacddd";
    cout << removeDuplicate(inputString) << endl;
    return 0;
}
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    string s = " Heloo world"; // dynamic array
    string j;
    getline(cin,j,'.');//'.'third argument is deliminator(where to stop)
    for(char c : j){
        cout << c << ',';
    }
    cout << s << endl;
    cout << j << endl;
    int n = 5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string x : sarr){
        cout << x << endl;
    }

}
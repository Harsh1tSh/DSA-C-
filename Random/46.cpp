#include<iostream>
#include<cstring>
using namespace std;

string vowels(string str){
    int n = str.length();
    string temp;
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            temp += 'a';
        }
        else if(str[i]=='e'){
            temp += 'e';
        }
        else if(str[i]=='i'){
            temp += 'i';
        }
        else if(str[i]=='o'){
            temp += 'o';
        }
        else if(str[i]=='u'){
            temp += 'u';
        }
    }
    return temp;

}

int main(){
    string A = "aeiodifgnfofghoefoewgg";
    cout << vowels(A) << endl;
    return 0;
}
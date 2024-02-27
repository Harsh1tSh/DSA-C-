#include<iostream>
using namespace std;

int main(){
    char sentence[1000];
    cin.getline(sentence,1000, '#');// by default'\n'is there in this
    cout<< sentence << endl;
}
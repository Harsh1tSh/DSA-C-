#include<iostream>
using namespace std;

int main(){
    char sentence[1000];
    char temmp = cin.get();
    int length = 0;
    while (temmp!='\n'){
        sentence[length++] = temmp;
        temmp = cin.get();
    }
    sentence[length] = '\0';
    cout << length << endl;
    cout << sentence << endl;

}
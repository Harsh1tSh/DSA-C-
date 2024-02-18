#include<iostream>
#include"Sackll.h"
using namespace std;

int main(){
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('g');
    s.push('f');
    s.push('j');

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;

}
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000] = "apple";
    char b[1000];
    // calculate length
    cout << strlen(a) << endl;
    // copy the string
    cout << strcpy(b,a) << endl;
    cout << b << endl;
    // compare the strings // can return +ve,-ve and 0 
    cout << strcmp(a,b) << endl;
    // concatinating two strings
    cout << strcat(a,b) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
//2-d character array
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "fourty",
        "eight",
        "hundred",
    };
    for(int i=0;i<4;i++){
        cout << numbers[i] << endl;
    }

    return 0;
}
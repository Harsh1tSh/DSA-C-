#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string removeDuplicatesAndSort(string str) {
    sort(str.begin(), str.end());
    string temp;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 || str[i] != str[i - 1]) {
            temp += str[i];
        }
    }
    return temp;
}

int main() {
    string inputString = "baaabaabaaaaacddd";
    cout << removeDuplicatesAndSort(inputString) << endl;
    return 0;
}
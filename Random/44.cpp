#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicatesAndSort(string str) {
    unordered_set<char> uniqueChars;
    string output;
    for (char c : str) {
        if (uniqueChars.find(c) == uniqueChars.end()) {
            uniqueChars.insert(c);
            output += c;
        }
    }
    sort(output.begin(), output.end());
    return output;
}

int main() {
    string inputString = "baaabaabaaaaacddd";
    cout << removeDuplicatesAndSort(inputString) << endl;
    return 0;
}


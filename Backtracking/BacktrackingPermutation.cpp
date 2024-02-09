#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to swap two characters in a string
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to find all permutations of a string
void findPermutations(string& str, int left, int right, vector<string>& permutations) {
    if (left == right) {
        permutations.push_back(str);
    } else {
        for (int i = left; i <= right; i++) {
            swap(str[left], str[i]);
            findPermutations(str, left + 1, right, permutations);
            swap(str[left], str[i]); // Backtrack
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<string> permutations;

    // Find permutations of the input string
    findPermutations(input, 0, input.length() - 1, permutations);

    // Display all permutations
    cout << "Permutations of " << input << " are:\n";
    for (const string& perm : permutations) {
        cout << perm << "\n";
    }

    return 0;
}

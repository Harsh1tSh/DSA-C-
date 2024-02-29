#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;  // Current index in the compressed array
    int count = 1;  // Count of consecutive repeating characters

    for (int i = 1; i <= n; i++) {
        if (i < n && chars[i] == chars[i - 1]) {
            count++;
        } else {
            chars[idx++] = chars[i - 1];  // Store the current character
            
            // If count is greater than 1, store the count as characters
            if (count > 1) {
                string countStr = to_string(count);
                for (char ch : countStr) {
                    chars[idx++] = ch;
                }
            }

            count = 1;  // Reset the count for the new group
        }
    }

    return idx;  // Return the new length of the array
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'c'};
    int newLength = compress(chars);

    cout << "Compressed array: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}

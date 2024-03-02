#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseWaveForm(int m, int n, vector<vector<int>>& matrix) {
    vector<int> result; // Linear vector to store the elements in reverse wave form

    // Traverse the matrix in a wave pattern
    for (int j = n - 1; j >= 0; j--) {
        // For even columns, traverse from top to bottom
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                result.push_back(matrix[i][j]);
            }
        }
        // For odd columns, traverse from bottom to top
        else {
            for (int i = m - 1; i >= 0; i--) {
                result.push_back(matrix[i][j]);
            }
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n; // Input the number of rows and columns

    vector<vector<int>> matrix(m, vector<int>(n)); // Create a 2D vector to store the matrix elements

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = reverseWaveForm(m, n, matrix); // Get the result in reverse wave form

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}

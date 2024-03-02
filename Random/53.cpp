// mango trees problems
#include <iostream>
#include <vector>

using namespace std;

int maximizeMinimumTrees(vector<vector<int>>& farm) {
    int n = farm.size();

    // Calculate prefix sum for each row
    vector<vector<int>> prefixSum(n, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            prefixSum[i][j] = prefixSum[i][j - 1] + farm[i][j - 1];
        }
    }

    int maxMinTrees = 0;

    // Iterate over all possible divisions
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int treesQuad1 = 0, treesQuad2 = 0, treesQuad3 = 0, treesQuad4 = 0;

            // Calculate trees in each quadrant
            for (int row = 0; row < i; row++) {
                treesQuad1 += prefixSum[row][j];
                treesQuad2 += prefixSum[row][n] - prefixSum[row][j];
            }
            for (int row = i + 1; row < n; row++) {
                treesQuad3 += prefixSum[row][j];
                treesQuad4 += prefixSum[row][n] - prefixSum[row][j];
            }

            // Calculate the minimum trees in the quadrants
            int minTrees = min(min(treesQuad1, treesQuad2), min(treesQuad3, treesQuad4));

            // Update the maximum minimum trees
            maxMinTrees = max(maxMinTrees, minTrees);
        }
    }

    return maxMinTrees;
}

int main() {
    int n;
    cout << "Enter the size of the farm (N): ";
    cin >> n;

    vector<vector<int>> farm(n, vector<int>(n));

    cout << "Enter the farm layout (1 for tree, 0 for no tree):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> farm[i][j];
        }
    }

    int maxMinTrees = maximizeMinimumTrees(farm);

    cout << "Maximum minimum number of trees in Rahul's quadrant: " << maxMinTrees << endl;

    return 0;
}

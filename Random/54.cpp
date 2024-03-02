#include <iostream>
#include <vector>

std::vector<std::vector<int>> generatePascalsTriangle(int n) {
    std::vector<std::vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

int main() {
    int n;
    std::cout << "Enter the number of rows for Pascal's triangle: ";
    std::cin >> n;

    std::vector<std::vector<int>> pascalTriangle = generatePascalsTriangle(n);

    // Display Pascal's triangle
    for (const auto& row : pascalTriangle) {
        for (const auto& num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

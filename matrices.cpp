#include <iostream>
#include <vector>

bool isMatch(const std::vector<std::vector<int>>& matrix, int target_sum, int row1, int col1, int row2, int col2) {
    int current_sum = 0;
    for (int i = row1; i <= row2; i++) {
        for (int j = col1; j <= col2; j++) {
            current_sum += matrix[i][j];
        }
    }
    return current_sum == target_sum;
}

void bruteForce(const std::vector<std::vector<int>>& matrix, int target_sum) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int row1 = 0; row1 < rows; row1++) {
        for (int col1 = 0; col1 < cols; col1++) {
            for (int row2 = row1; row2 < rows; row2++) {
                for (int col2 = col1; col2 < cols; col2++) {
                    if (isMatch(matrix, target_sum, row1, col1, row2, col2)) {
                        std::cout << "Found match: "
                             << "Sub-matrix from (" << row1 << ", " << col1 << ") to ("
                             << row2 << ", " << col2 << ") adds up to " << target_sum << std::endl;
                        return;
                    }
                }
            }
        }
    }
    std::cout << "No match found." << std::endl;
}

int main() {
    std::vector<std::vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target_sum = 15;
    bruteForce(matrix, target_sum);
    return 0;
}

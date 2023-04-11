#include <iostream>
#include <vector>

bool isMatch(const std::vector<int>& array, int target_sum, int start_index, int end_index) {
    int current_sum = 0;
    for (int i = start_index; i <= end_index; i++) {
        current_sum += array[i];
    }
    return current_sum == target_sum;
}

void bruteForce(const std::vector<int>& array, int target_sum) {
    int n = array.size();
    for (int start_index = 0; start_index < n; start_index++) {
        for (int end_index = start_index; end_index < n; end_index++) {
            if (isMatch(array, target_sum, start_index, end_index)) {
                std::cout << "Found match: "
                     << "Sub-array from index " << start_index << " to index "
                     << end_index << " has a sum of " << target_sum << std::endl;
                return;
            }
        }
    }
    std::cout << "No match found." << std::endl;
}

int main() {
    std::vector<int> array {1, 2, 3, 4, 5};
    int target_sum = 8;
    bruteForce(array, target_sum);
    return 0;
}

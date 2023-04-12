#include <iostream>
#include <vector>

using namespace std;

int findLIS(vector<int>& nums) {
    int n = nums.size();
    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        int len = 1, prev = nums[i];
        for (int j = i + 1; j < n; j++) {
            if (nums[j] > prev) {
                len++;
                prev = nums[j];
            }
        }
        maxLIS = max(maxLIS, len);
    }
    return maxLIS;
}

int main() {
    vector<int> nums = {7, 9, 2, 5, 3, 10, 101, 18};
    int lis = findLIS(nums);
    cout << "Length of Longest Increasing Subsequence: " << lis << endl;
    return 0;
}

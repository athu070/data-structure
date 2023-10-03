#include <iostream>
using namespace std;

int maxContiguousSum(int arr[], int n) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];
    
    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    
    return maxSoFar;
}

int main() {
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Largest contiguous block sum: " << maxContiguousSum(arr, n) << endl;
    
    return 0;
}

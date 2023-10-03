#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        if (count[arr[i]] > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    cout << "Enter Size of Array: " << endl;
    int n;
    cin >> n;
    cout << "Enter Elements in the Array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Majority element is " << majorityElement(arr, n) << endl;
    return 0;
}

// TC- O(n)
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1, maxCount = 0, majorityElement = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                majorityElement = arr[i - 1];
            }
            count = 1;
        }
    }
    if (count > maxCount)
    {
        majorityElement = arr[n - 1];
    }
    return majorityElement;
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

// TC - O(n log n)
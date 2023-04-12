#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    int count = 0, majorityElement = -1;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majorityElement = arr[i];
            count = 1;
        }
        else if (majorityElement == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
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

#include <bits/stdc++.h>
using namespace std;
int majority_count(vector<int> &arr, int i, int j, int maj)
{
    int cc = 0;
    for (int k = i; k <= j; k++)
    {
        if (arr[k] == maj)
        {
            cc++;
        }
    }
    return cc;
}
int majority_fun(vector<int> &arr, int i, int j)
{
    if (i == j)
    {
        return arr[i];
    }
    int mid = i + (j - i) / 2;
    int left = majority_fun(arr, i, mid);
    int right = majority_fun(arr, mid + 1, j);
    if (left == right)
    {
        return left;
    }
    int left_count = majority_count(arr, i, j, left);
    int right_count = majority_count(arr, i, j, right);
    if (left_count > right_count)
    {
        return left;
    }
    else
    {
        return right;
    }
}
int main()
{
    int n;
    cout << "Enter size of Array: " << endl;
    cin >> n;
    vector<int> arr(n);
    int check = 0;
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element = majority_fun(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            check++;
        }
    }
    if (check > (n / 2))
    {
        cout << "Majority Element is: " << element;
    }
    else
    {
        cout << "Majority Element does not exist" << endl;
    }
    return 0;
}
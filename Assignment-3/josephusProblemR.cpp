#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;
    else
        return (jos(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cout << "Enter Number of People: " << endl;
    cin >> n;
    cout << "Enter Value of K: " << endl;
    cin >> k;

    cout << "Winner is : " << jos(n, k) << endl;
}
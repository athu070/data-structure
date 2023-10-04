#include <iostream>

using namespace std;

int main()
{
    int A[10], n = 10, i, key;

    cout << "enter the numbers: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "enter the key: " << endl;
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << "found at: " << i << endl;
            return 0;
        }
    }

    cout << "key not found";

    return 0;
}
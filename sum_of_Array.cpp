#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "enter the size of array: " << endl;
    cin >> size;

    int A[size];
    cout << "enter the the number in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + A[i];
    }
    cout << sum << endl;

    return 0;
}
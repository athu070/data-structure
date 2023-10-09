#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "enter the size of the array: " << endl;
    cin >> size;

    int A[size];
    cout << "enter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    int min = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << min;
}
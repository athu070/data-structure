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

    int positivenumbercount = 0;
    int negativenumbercount = 0;

    for (int i = 0; i < size; i++)
    {
        if (A[i] > 0)
        {
            positivenumbercount++;
        }
        else if (A[i] < 0)
        {
            negativenumbercount++;
        }
    }
    cout << positivenumbercount << endl;
    cout << negativenumbercount << endl;
    return 0;
}
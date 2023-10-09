#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A[10] = {2, 3, 4, 5, 6, 7};
    int *p = A;

    cout << p << endl;
    cout << *(p + 2) << endl;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
}
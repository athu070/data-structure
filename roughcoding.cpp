#include <iostream>
using namespace std;

int main()
{
    int a[10] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = a[0];

    for (int i = 0; i <= 10; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
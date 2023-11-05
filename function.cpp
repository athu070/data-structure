#include <iostream>
using namespace std;

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int x = 2, y = 3, z;
    z = add(x, y);
    cout << z << endl;
    return 0;
}
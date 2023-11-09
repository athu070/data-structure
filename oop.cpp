#include <iostream>
using namespace std;

class rectangle
{
public:
    int breadth;
    int length;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout << "area is: " << r1.area() << endl;
    cout << "perimeter is: " << r1.perimeter() << endl;
}
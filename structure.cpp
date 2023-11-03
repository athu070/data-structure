#include <iostream>
using namespace std;

void main()
{
    struct employee
    {
        int id;
        float salary;
        int mobile;
    };
    struct employee e1, e2, e3;
    cout << "enter id, salary and mobile no. of 3 employee " << endl;
    cin >> e1.id >> e1.salary >> e1.mobile;
    cin >> e2.id >> e2.salary >> e2.mobile;
    cin >> e3.id >> e3.salary >> e3.mobile;
    cout << "entered result";
    cout << e1.id << e1.salary << e1.mobile;
    cout << e2.id << e2.salary << e2.mobile;
    cout << e3.id << e3.salary << e3.mobile;
}
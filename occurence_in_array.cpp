#include <iostream>

using namespace std;

int main() {
    int arraySize;
    int* myArray;
    int valueToCount;
    int count = 0;

    cout << "Enter the size of the array: ";
    cin >> arraySize;
    myArray = new int[arraySize];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < arraySize; i++) {
        cin >> myArray[i];
    }

    cout << "Enter a value to count: ";
    cin >> valueToCount;

    for (int i = 0; i < arraySize; i++) {
        if (myArray[i] == valueToCount) {
            count++;
        }
    }

    cout << "The value " << valueToCount << " appears " << count << " times in the array." << endl;
    delete[] myArray;
    return 0;
}

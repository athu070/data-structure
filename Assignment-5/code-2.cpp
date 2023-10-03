#include <iostream>

using namespace std;

// Recursive fast modular exponentiation algorithm
int fastModularExponentiation(int base, int exponent, int modulus) {
    if (exponent == 0) {
        return 1;
    }

    int result = fastModularExponentiation(base, exponent / 2, modulus);
    result = (result * result) % modulus;

    if (exponent % 2 == 1) {
        result = (result * base) % modulus;
    }

    return result;
}

int main() {
    int base, exponent, modulus;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << "Enter the modulus: ";
    cin >> modulus;

    int result = fastModularExponentiation(base, exponent, modulus);

    cout << base << "^" << exponent << " mod " << modulus << " = " << result << endl;

    return 0;
}

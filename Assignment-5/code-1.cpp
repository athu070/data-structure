#include <iostream>

using namespace std;

// Fast modular exponentiation algorithm
int fastModularExponentiation(int base, int exponent, int modulus) {
    int result = 1;
    base = base % modulus;

    while (exponent > 0) { 
        if (exponent & 1) {
            result = (result * base) % modulus;
        }
        exponent = exponent >> 1;
        base = (base * base) % modulus;
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

#include <iostream>
#include <string>

using namespace std;

int findTarget(string text, string target) {
    int n = text.length();
    int m = target.length();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != target[j])
                break;
        }
        if (j == m)
            return i;
    }
    return -1;
}

int main() {
    string text;
    cout << "Enter the text: ";
    cin >> text;
    string target;
    cout << "Enter the target string: ";
    cin >> target;
    int index = findTarget(text, target);
    if (index != -1) {
        cout << "The target string was found at index " << index << endl;
    }
    else {
        cout << "The target string was not found in the text" << endl;
    }
    return 0;
}

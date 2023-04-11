#include <iostream>
#include <string>

bool isMatch(std::string s, std::string target) {
    return s == target;
}

void bruteForce(std::string target) {
    std::string characters = "abcdefghijklmnopqrstuvwxyz";
    std::string current = "";
    for (int i = 0; i < target.length(); i++) {
        for (int j = 0; j < characters.length(); j++) {
            current += characters[j];
            if (isMatch(current, target)) {
                std::cout << "Found match: " << current << std::endl;
                return;
            }
        }
        current = "";
    }
    std::cout << "No match found." << std::endl;
}

int main() {
    bruteForce("hello");
    return 0;
}

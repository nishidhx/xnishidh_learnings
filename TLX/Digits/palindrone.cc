#include <bits/stdc++.h>

int palindrone(int number) {
    int revN = 0;
    int temp = number;
    while(number > 0) {
        int rem = number % 10;
        revN = revN * 10 + rem;
        number = number / 10;
    }
    return revN == temp ? 1 : 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "the number is palindrone: " << (palindrone(num) == 1 ? "true" : "false");
}
#include <bits/stdc++.h>

/**
 * write a program to generate the reverse of givven number of N . And print the corresponding reverse number.
 */

int reverse(int number) {
    int revN = 0;
    while(number > 0) {
        int rem = number % 10;
        number = number / 10;
        revN = revN * 10 + rem;
    }
    return revN;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Reversed number of it: " << reverse(number); 
}
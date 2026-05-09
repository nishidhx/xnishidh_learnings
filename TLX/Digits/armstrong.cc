#include <bits/stdc++.h>

int armstrong_number(int number) {
    int temp = number, sum = 0;
    
    while (temp > 0) {
        int rem = temp % 10;
        sum = sum + pow(rem, 3);
        temp = temp / 10;
    }

    if (number == sum) {
        printf("Armstrong");
    }
}

int main() {

}
#include <bits/stdc++.h>

/**
 * Given the number n. find out and return the number of digits present in the number.
 */

int way_1(int number)
{
    int count;

    while (number > 0)
    {
        number = number / 10;
        count++;
    }

    return count;
}

int way_2(int number) {
    return (int) (log10(number) + 1);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Count of the number is: " << way_1(num) << std::endl;
    std::cout << "Count of the number is: " << way_2(num) << std::endl;
}
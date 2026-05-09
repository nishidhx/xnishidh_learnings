#include <bits/stdc++.h>

int way_1(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}

int way_2(int number) {
    std::vector<int> ls;
    for (int i = 1; i < sqrt(number); i++) {
        if (number % i == 0) {
            ls.push_back(i);
            if (number/i != i) {
                ls.push_back(number/i);
            }
        }
    
    }

    std::sort(ls.begin(), ls.end());
    for (std::vector<int>::iterator iter = ls.begin(); iter != ls.end(); iter++) {
        std::cout << *(iter) << " "; 
    }

    return 0;
}

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "the divisors of the number are: " << std::endl;
    way_2(number); 
}
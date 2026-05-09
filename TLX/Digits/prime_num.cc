#include <bits/stdc++.h>

/*
    Time complexity O(N) iterates and checks if the number is getting divided or not for factors
*/
int way_1(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

/*
    Mathematical observation of factors leads to take sqrt(N) hence the time complexity for this O(sqrt(N))
 */
int way_2(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i)
            return false;
    }
    return true;
}

/*
    early returns
*/
int way_3(int number)
{
    if (number <= 2)
        return number > 1;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPrime_2(int n) {
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Example of pre-computing primes up to N
std::vector<bool> sieve(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }
    return is_prime;
}

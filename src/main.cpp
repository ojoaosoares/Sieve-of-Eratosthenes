#include "sieve_eratosthenes.hpp"
#include <iostream>

int main()
{
    long long n; std::cin >> n;

    sieve_eratosthenes(n);
}
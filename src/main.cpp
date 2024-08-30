#include "sieve_eratosthenes.hpp"
#include <iostream>

int main()
{
    std::cout << "N: ";
    long long n; std::cin >> n;

    std::vector<long long> primes = sieve_eratosthenes(n);

    for (long long &p : primes)
        std::cout << p << ' ';
    
    std::cout << '\n';
}

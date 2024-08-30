#include "sieve_eratosthenes.hpp"
#include <iostream>

std::vector<long long> sieve_eratosthenes(long long &n)
{
    if (n < 0)
        throw std::invalid_argument("Error: N is a negative number");

    std::vector<long long> primes;
    
    if (n >= 2)
    {
        primes.push_back(2);

        std::vector<bool> sieve((n - 1) / 2, true);

        long long p = 3;

        while (p*p <= n)
        {
            if (sieve[(p -1)/ 2 - 1])
            {
                primes.push_back(p);

                for (size_t i = p*p; i <= n; i+= 2*p)
                    sieve[(i - 1) / 2 - 1] = false;
            }

            p += 2;
        }

        for (size_t i = (p -1)/ 2 - 1; i < (n - 1) / 2; i++)
            if (sieve[i])
                primes.push_back(2*(i + 1) + 1);
    }

    return primes;
}
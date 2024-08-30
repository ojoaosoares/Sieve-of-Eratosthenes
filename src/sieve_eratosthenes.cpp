#include "sieve_eratosthenes.hpp"
#include <iostream>

std::vector<long long> sieve_eratosthenes(long long &upper_bound)
{
    std::vector<bool> sieve((upper_bound - 1) / 2, true);

    long long p = 3;

    while (p*p <= upper_bound)
    {
        if (sieve[(p -1)/ 2])
        {
            for (size_t i = p*p; i <= upper_bound; i+= 2*p)
                sieve[(i - 1) / 2] = false;
        }

        p += 2;
    }

    for (size_t i = 0; i < (upper_bound - 1) / 2; i++)
        if (sieve[i])
            std::cout << 2*(i + 1) + 1;
    
    
}
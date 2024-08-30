#ifndef SIEVE_OF_ERATOSTHENES 
#define SIEVE_OF_ERATOSTHENES

#include <vector>
#include <gmpxx.h>

std::vector<mpz_class> sieve_eratosthenes(mpz_class &upper_bound);

#endif
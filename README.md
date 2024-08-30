# Sieve of Eratosthenes

The Sieve of Eratosthenes is a classical algorithm used to find all prime numbers up to a specified integer. It is one of the most efficient ways to identify small prime numbers and has a time complexity of $O(n \log \log n)$. The algorithm leverages the fact that all non-prime numbers are divisible by smaller primes, allowing for systematic elimination of non-primes.

## Algorithm Overview

Given an integer $n$, the Sieve of Eratosthenes finds all prime numbers less than or equal to $n$ by iteratively marking the multiples of each prime number starting from 2. Knowing that the only even prime number is 2, the algorithm focuses on marking multiples of odd primes, which reduces unnecessary operations.

### Basic Idea:

1. **Initialization**:
   - Create a list of odd integers from 3 to $n$.
   - Assume all numbers are prime.

2. **Marking Multiples**:
   - Start with the first prime number, 3, and mark all of its multiples.
   - Move to the next number in the list that is still considered prime.
   - Repeat the process until you've processed each number up to $\sqrt{n}$.

3. **Collect Primes**:
   - The numbers that remain unmarked are primes.

Why repeating the process until $\sqrt{n}$ ? We know that if $n$ is a non-prime number its factors must be less than equal $\sqrt{n}$. If $a$ is a non-prime less than equal $n$, its factors must be less than equal $\sqrt{a}$. That is less than equal $\sqrt{n}$.

Another optimization we can do is marking the multiples of a prime p starting from p². That happens because all other multiples of p less than p² were already covered by smaller primes.

## Example

Let's find all prime numbers up to $n = 30$ using the Sieve of Eratosthenes.

1. **Initialization**:
   - `is_prime = [True] * 31`
   - `p = 2`

2. **Marking Multiples**:
   - Mark multiples of 2: `4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30`.
   - Move to `p = 3` and mark multiples of 3: `9, 12, 15, 18, 21, 24, 27, 30`.
   - Skip even numbers and move to `p = 5`.
   - Mark multiples of 5: `25, 30`.

3. **Collect Primes**:
   - The numbers that remain unmarked are `[2, 3, 5, 7, 11, 13, 17, 19, 23, 29]`.

Thus, the prime numbers up to 30 are `2, 3, 5, 7, 11, 13, 17, 19, 23, 29`.

## Main Program Usage

The main program implementing the Sieve of Eratosthenes takes an integer $n$ as input and outputs all prime numbers up to $n$.

- **Input**: An integer $n$.
- **Output**: A list of all prime numbers less than or equal to $n$.

For example, given the input $n = 30$, the program would output `[2, 3, 5, 7, 11, 13, 17, 19, 23, 29]`.

## Applications and Limitations

The Sieve of Eratosthenes is particularly efficient for generating a list of small primes. However, it requires $O(n)$ space, which may be a limitation for very large $n$. For extremely large numbers, more advanced algorithms such as the Segmented Sieve or the Sieve of Atkin might be preferable.

## References

- Wikipedia: [Sieve of Eratosthenes](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
- *Números Inteiros e Criptografia RSA*.
- Other books and research papers on prime number generation and number theory.

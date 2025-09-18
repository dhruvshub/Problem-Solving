## 172. Factorial Trailing Zeroes

Problem Link: [LeetCode](https://leetcode.com/problems/factorial-trailing-zeroes/description/)


$$
n! = n\times(n-1)\times(n-2)\times(n-3) .... \times1
$$


The naive or brute force method to solve this is by finding the factorial first and then counting the number of zeroes.
This is straightforward but is computationally expensive and after a certain point the factorial calculated won't be able to fit in the integer data type in C++ as well.

### Legendre's Formula
So, the best way to solve this problem is by using Legendre's Formula. This formula gives us the highest power of primes in a factorial.

The formula goes like:

$$
\nu_p(n!) = \sum_{i=1}^k \left\lfloor \frac{n}{p^i} \right\rfloor
$$

where,

$\nu$ = The highest power (Number of occurrences of the prime number)  
$n$ = Any positive integer  
$p$ = The prime number you are counting  
$k$ = $\lfloor \log_p n \rfloor$

#### Why this formula?

Our aim is to find the number of zeroes in a factorial. A zero is formed either by directly a $10$ as a multiplier or $2$ and $5$ present as multipliers. 
If we look closely enough all the zeroes would be because of two prime factors $i.e. 2 and 5$. Between $2$ and $5$, $5$ occurs less frequently so the number of
zeroes ultimately boils down to the number of $5s$ in the prime factorization. To calculate the count, we can use the Legendre's formula. It becomes,

$$
\nu_5(n!) = \sum_{i=1}^k \left \lfloor \frac{n}{5^i} \right \rfloor
$$

This becomes,  

$$
\nu_5(n!) = \left \lfloor \frac{n}{5^1} \right \rfloor + \left \lfloor \frac{n}{5^2} \right \rfloor + \left \lfloor \frac{n}{5^3} \right \rfloor + .......
$$


In my code, I have run the loop from `i=5` to `i<=n`. This stops the loop when `i` becomes equal or greater than `n`. (Because n won't be divisible by `i` if it's greater than `n`).
This indirectly stops the loop after $k$ iterations ($k=\lfloor\log_5 n \rfloor$).
## 3. Largest Prime Factor

In this problem, I have to find the largest prime factor of the number 600851475143.

To solve this, I created a function primeFactor() which finds all the prime factors of a number, stores them in an array, and returns the index of the last element entered in the array (which I can use to access the last i.e. the largest prime factor of the number).

First, I rule out all the even factors (all the 2's) using a loop. Now when only odd factors are remaining, I start to look for them from three and increment by 2 at every iteration (since I have already taken even prime factors (2's) into account).

This gives me all the remaining prime factors. In the end, after the loop ends, if the number is still greater than 2, then that must be a prime number, so I add that to the array and finally return the index of the last number.
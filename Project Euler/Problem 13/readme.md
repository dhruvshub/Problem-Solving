## 13. Large Sum

This problem took me more time to solve than it should. In python, the solution would have been straight forward and easy. But this implementation is in C++ (and I am still in the learning phase), so yeah.
 Anyway, here's the algorithm:

It's nothing fancy just a replication of how we do addition by hand.

Imagine adding:
```
  789
+ 456
+ 123
------
------
```
Firstly we take the one's column and add (9+6+3), write 8 and carry 1 forward; And so on till the last digit.

This is precisely what I am doing. I stored the digits in reverse order for the ease of implementation.
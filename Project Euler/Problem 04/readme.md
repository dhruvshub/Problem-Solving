## 4. Largest Palindrome Product

My solution contains two main functions ```isPalindrome``` and ```maxPalindrome```.
The main logic of the problem is in ```maxPalindrome```. Starting from 100, it computes the product, checks if the
product is a palindrome is yes, then check if the palindrome product is greater than the previous max (initialized to 0 at first), if yes then 
update max and repeat until 999.

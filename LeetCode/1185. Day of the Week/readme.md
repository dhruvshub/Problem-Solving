## 1185. Day of the Week

Here is the [problem link](https://leetcode.com/problems/day-of-the-week/description/).

I have solved this using Zeller's formula.

The formula is as follows:

$$
f = k + \left\lfloor \frac{13m - 1}{5} \right\rfloor + D + \left\lfloor \frac{D}{4} \right\rfloor + \left\lfloor \frac{C}{4} \right\rfloor - 2C
$$

where,

$k$ = the day of the month  
$m$ = the month (March = 1, April = 2, …, December = 10, January = 11, February = 12)  
$D$ = the last two digits of the year  
$C$ = the century (first two digits of the year)

<strong>Note: </strong> (If the months are Jan or Feb then they are considered to be of the previous year so subtract 1 from the year if that's the case.)




`f` is now divided by 7 and the remainder tells us what day of year it is.
if the remainder is negative (because `f` was negative) just add 7 to it.

OR

You can also add `7*C` to the formula above (which is what I did); This way you won't have to worry about a negative remainder.

Now, the final formula becomes,

$$
f = k + \left\lfloor \frac{13m - 1}{5} \right\rfloor + D + \left\lfloor \frac{D}{4} \right\rfloor + \left\lfloor \frac{C}{4} \right\rfloor + 5C
$$
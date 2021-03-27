# MME (5pts)

Given 2 integers `a` and `b`, find the modular multiplicative inverse of `x` under modulo `b`. The modular multiplicative inverse is an integer `y` such that: `a x ~= 1(mod b)`.

The value of `y` should be in the ranges of `1 <= x <= b-1`. In other words, in the range of integer `mod b`.

The multiplicative inverse of `a mod m` exists if and only if `a` and `b` are relatively prime.

**Input:**

- The first input will contain `n, 1 <= n <= 20000` - the amount of test cases
- Each following input will contain the integers `a` and `b`. `1 <= a,b <= 10^6`.

**Output:**

- Print the modular multiplicative inverse of `a` under `mod m`.

**Your Input:**

```
3
3
11
10
17
3
7
```

**Expected Output:**

```
4
12
5
```

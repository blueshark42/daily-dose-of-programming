# Bad Hash

Problem D from Fundamentals Round #1

## Part 1

You are required to hash a list of integers in a specific way. The method that you have to use goes the following:

Each integer will equal to it's original value plus it's index. In other words our number `a` would proceed as: `a[1]+1, a[2]+2, ..., a[n]+n`.

We also require to print the modified hashed list of integers.

**Input:**

- The first input contains `n, 1 <= n <= 10^3` - the amount of numbers to hash.
- Each following input contains `a[i]` - the number to hash.

**Output:**

- Print the hashed list of integers.

**Your Input:**

```
13
4 8 3 93 18 72 18 50 32 73 104 2 28
```

**Expected Output:**

```
5 10 6 97 23 78 25 58 41 83 115 14 41
```

**Note:**

The hashed values must be separated by a space.

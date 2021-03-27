# Bool Toss (1pt)

Everyone is familiar with what the coin toss is. But we engineers we do it a bit differently. We toss booleans.

This means that when we throw it up it spins `n` times. We know the value of `n` and the starting value of `b`, our bool.

You have to print what side will `b` fall on, `true` or `false`.

The bool will always start in the position `true`.

**Input:**

- The first input will contain `n, 1 <= n <= 1000` - the amount of test cases
- The following inputs will contain `r, 0 <= r <= 10^9` - the amount of rotations.

**Output:**

- Print the finishing value of bool `b`.

**Your Input:**

```
5
3 8 1 10 5
```

**Expected Output:**

```
false
true
false
true
false
```

**Note:** The output can be a string. It doesn't have to be a boolean.

# Calculator Plus Plus

Problem E from Fundamentals Round #1

## Part 1

You will be given a list of integers. These integers will either signify numbers or either of the following: `+, -, *, /`.
The normal number integers you will receive will be in the boundaries of `0 <= i < 100`.

The integers with special meanings are the following:

| Integer | Meaning       |
| ------- | ------------- |
| `100`   | Plus, `+`     |
| `200`   | Minus, `-`    |
| `300`   | Multiply, `*` |
| `400`   | Divide, `/`   |

You receive these numbers and will have to transfer the special integers into mathemathical actions. For example, `[1, 100, 2]` would be `1+2` which equals to `3`. Therefore, the answer to the test case would be `3`.

The list will always end with an integer with the value of `0-99`.

**Input:**

- The first input contains `n, 1 <= n <= 10^3` - the amount of numbers in the list.
- Each following input is an integer `i, 0 <= i <= 400` - the integers in the list.

**Output:**

- Print the equation of the calculation.

**Your Input:**

```
11
7 100 4 300 9 100 1 400 2 200 25
```

**Expected Output:**

```
25
```

**Note:**

The final calculation would be: `7+4*9 ...`, until the last integer.

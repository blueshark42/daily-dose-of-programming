# Chained Numbers
Problem Rating: 70 (Beginner)

## Part 1
You are bored infront of your computer. Why not make a simple program that prints your input `n` times?

**Input:**
- The first line contains `n, 0 <= n <= 1000` - how many times we want to print.
- The second line contains `t`, the number we want to print `n` times.


**Output:**
- `n` times `t` printed on the same line.

**Your Input:**
```
18
3
```

**Expected Output:**
```
333333333333333333
```


## Part 2
It gets too hard to read and spammy to print it all on the same line. Why not add indexes at which we will drop a line?

**Input:**
- The first line contains `n, 0 <= n <= 1000` - how many times we want to print.
- The second line contains `t`, the number we want to print `n` times.
- The third line contains `d`, the index at which we have to drop.


**Output:**
- `n` times `t` printed formatted properly `d`.

**Your Input:**
```
15
4
7
```

**Expected Output:**
```
4444444
44444444
```
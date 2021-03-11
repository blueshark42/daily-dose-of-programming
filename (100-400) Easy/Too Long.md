# Too Long
Problem Rating: 250 (Easy)

## Part 1
You are taking in class taking a test from programming. The question on the test reads:

You will receive `n` strings of varying length. We want to replace long words with special abbreviations.

We consider strings with a length longer than `10` characters a long string. For example a the string `hellomynameisbob` is longer than 10 characters, thus it would be replaced with `h14b`. The reason why it becomes `h14b` is because we want to keep the first character and last character while putting the remaining amount of letters inbetween as a number.

**Input:**
- The first line contains `n, 1 <= n <= 10` - amount of test cases.
- Each following inputs contain the string `s`, which we want to check.


**Output:**
- Print the strings, shortened if required.

**Your Input:**
```
6
thisisit
32xd5hjkbb
thisstringiswaytoolong
makesureyoureadthequestioncorrectly
x
val
```

**Expected Output:**
```
thisisit
32xd5hjkbb
t20g
m33y
x
val
```
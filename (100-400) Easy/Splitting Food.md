# Splitting Food
Problem Rating: 150 (Easy)

## Part 1
You and your friend won the snowball fight. The winners receive fries with ketchup as the reward. Since there are 2 of you, you and your friend decide to give both of you an even amount of food.

**Input:**
- The first line contains, `n, 1 <= n <= 10` - test cases.
- Each following line will contain `f, 0 <= f <= 10^9` - the amount of food won.


**Output:**
- Output "YES" if it is possible to give both of you even amounts of food, "NO" otherwise.

**Your Input:**
```
7
8
4
2
0
1
12854
42
```

**Expected Output:**
```
YES
YES
NO
NO
NO
YES
YES
```

**Note:** 

The expected output is not case sensitive.

## Part 2
The jury gave you the fries in a large amount of small batches and the ketchup in one big batch. You can survive having more ketchup than fries, but not the other way around. Having the same amount of both works just as well too.

**Input:**
- The first line contains `n, 1 <= n <= 10` - test cases.
- The second line contains `k, 0 <= k <= 10^9` - the amount of ketchup won.
- Each following line will contain `f, 0 <= f <= 10^9` - the amount of food won.


**Output:**
- Output "YES" if it is possible to survive with the given food and ketchup, "NO" otherwise.


**Your Input:**
```
4
130
180
42
130
0
```

**Expected Output:**
```
NO
YES
YES
NO
```

**Note:** 

Note that the ketchup is given in one large batch.


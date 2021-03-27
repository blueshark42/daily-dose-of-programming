# Pancakes (4pts)

**Execution Time Limit:** 2000ms

You are making a tower of pancakes. Each round you put another pancake on top, starting from `0`.

On some occasions you pour maple syrup on the top of the tower. Your input `s` signifies how many pancakes from the top the syrup will cover.

You will have to print a `1` for each pancake that is covered and `0` for those that aren't. Starting from the bottom.

If we have less pancakes than syrup on the turn - the syrup is wasted.

**Input:**

- The first input contains `n, 1 <= n <= 10^3` - the amount of test cases.
- The second input will contain `t, 1 <= t <= 100` - the amount of pancake rounds.
- The following inputs will contain `s, 0 <= s <= 10^3` - the amount of pancakes the syrup pours down.

**Output:**

- Print the finishing state of all the pancakes.

**Your Input:**

```
2
10
0 2 0 0 1 0 0 2 0 0
5
0 0 6 0 1
```

**Expected Output:**

```
1 1 0 0 1 0 1 1 0 0
1 1 1 0 1
```

**Note:**

Let's break down the turns in the first test case. The first turn we do not add maple syrup, we just add a pancake. So we have 1 pancake. The next round we add a pancake and also pour syrup that covers 2 pancakes. Meaning so far all of our pancakes are covered.

The next 2 rounds none are covered but 2 are added. The next round one is added and also covered. And so on...

If we would have 3 pancakes and we would have to cover 5 pancakes with it, we would cover all 3 and the extra 2 go to waste.

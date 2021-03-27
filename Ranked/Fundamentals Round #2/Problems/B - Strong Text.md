# Strong Text (2pts)
Albert is a funny guy and he says he wants to fight his friends with characters. This works as follows: Albert chooses a character, then his enemy chooses a character.

For example, let's assume Albert chose `v` and his enemy chose `h`. Albert would win this fight because his character is "stronger" in the sense that the ASCII value of his character is larger than that of his opponent. `h` having an ASCII value of `104` and `v` having an ASCII value of `118`.

His friends join on the fight. Each time they win, they keep the winning character.

If none of the characters win, print out either one of the characters.

**Input:**

- The first input will contain `n, 1 <= n <= 10` - the amount of test cases
- Each following input will contain a character `a` and `b`. Both will always be lowercase english letters.

**Output:**

- Print the winning character from each fight.

**Your Input:**

```
3
v z
a c
h a
```

**Expected Output:**

```
z
c
h
```

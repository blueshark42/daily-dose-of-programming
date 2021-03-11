# Path To Treasure
**Easy Division Finale**

## Part 1
You are on a beach and a few people come up to you to help them. Somehow they felt the super smart big brain in you. Anyway, they found a paper with a list of numbers that are 
apparently coordinates. You do not have to worry about how the coordinates work, they are just asking you to find the 2 numbers that add up to `2021`.

**Input:**
- First line contains `n, 1 <= n <= 10` - the amount of coordinates.
- The following lines `a[1], a[2], ..., a[n], 1 <= a <= 2000` - one of the possible coordinates.


**Output:**
- The two number combination that add up to `2021` multiplied by each other.

**Your Input:**
```
6
1722
979
366
299
676
1456
```

**Expected Output:**
```
514878
```

**Note:** If we had the coordinates `1000` and `1021`, which add up to `2021`, we would multiply them `1000*1021`, thus our answer would be `1021000`.

## Part 2
This part is quite challenging. Don't be discouraged if you cannot solve it.

You and your team go to the location with high hopes to find some gold... or something. You start digging and you hit on something hard. It's a chest!
It's so heavy it requires 4 people to lift it. You manage to lift it out on the shore and open it. This sucks. It's just a bunch of rocks and another piece of paper.

The paper says: 
- *We want to make sure we get the ones that deserve it to the end. Not some impostor followers. The location of the final treasure can be found on the
coordinates of the 3 numbers that add up to 2021, and then are multiplied. Good Luck.*

Your goal is to find the 3 numbers that add up to `2021`, then multiply them.

**Input:**
- First line contains `n, 1 <= n <= 10` - the amount of coordinates
- The following lines `a[1], a[2], ..., a[n], 1 <= a <= 2000` - one of the possible coordinates.


**Output:**
- The three number combination that add up to `2021` multiplied by each other.

**Your Input:**
```
6
1722
979
366
299
676
1456
```

**Expected Output:**
```
242220264
```

**Note:** This is the same process as part 1, but we require an extra number.
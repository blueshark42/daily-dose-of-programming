# Voting
Problem C from Fundamentals Round #1

## Part 1
Each class in school has a designated class leader. The class leader makes sure everything is in order in the class. To determine who the new class leader will be, students use a voting system to vote for one of 2 people.

The votes are either in the form of a `0` or a `1`. The person with the more votes per category wins. 

There will be no ties.

**Input:**
- The first input contains `n, 1 <= n <= 5` - the amount of voting categories.
- The following `n` inputs contain 3 votes.


**Output:**
- Print `ZERO` if `0` has more votes, `FIRST` if `1` has more votes.

**Your Input:**
```
5
1 1 0
0 1 0
0 0 0
1 1 1
1 0 0
```

**Expected Output:**
```
FIRST
ZERO
ZERO
FIRST
ZERO
```



# Nightclub Bouncer
Problem Rating: 200 (Easy)

## Part 1
The nightclub is open with it's amazing big new event tonight! But unfortunately the bouncer got sick and cannot attend today.
The IT Team comes up with an idea. They can create a machine that will read the IDs of every people that enter. Fortunately for you, 
one of the engineers already parsed the information for you, only keeping the ages of the people (your input).

Can you tell us how many people were not allowed into the nightclub?

**Input:**
- First line contains, `n, 1 <= n <= 50` - the amount of people that tried to enter.
- The following inputs, `a[1], a[2], ..., a[n], 1 <= a <= 100` - the age of the person trying to enter.


**Output:**
- The amount of people that were not allowed in

**Your Input:**
```
20
19 28 29 27 16 19 28 23 20 17 17 34 48 16 27 29 16 37 18 15
```

**Expected Output:**
```
6
```

**Note:** Legal age to enter a nightclub is `18+`.

## Part 2
The people that are not supposed to enter have somehow bypassed the machine and were let in! We have to quickly resolve this issue.
Your engineer friend created a system that would detect forged or suspicious IDs. If one of such was detected, their age would be by 100 smaller.
Meaning if a `16` year old would enter, their age after going through the machine would be `-84`. 

Your goal is to count the amount of people that were flagged by this system.

**Input:**
- First line contains, `n, 1 <= n <= 50` - the amount of people that tried to enter.
- The following inputs, `a[1], a[2], ..., a[n], 1 <= a <= 100` - the possibly modified age of the person trying to enter.


**Output:**
- The amount of people that were not allowed in

**Your Input:**
```
9
41 20 -82 19 -83 -86 19 -84 18
```

**Expected Output:**
```
4
```

**Note:** With a bit of mathematics, you can determine which ages were modified.
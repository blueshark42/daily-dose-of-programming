# 2: Nightclub Bouncer
Difficulty: Easy

## Part 1
- The nightclub is open with it's amazing big new event tonight! But unfortunately the bouncer got sick and cannot attend today.
The IT Team comes up with an idea. They can create a machine that will read the IDs of every people that enter. Fortunately for you, 
one of the engineers already parsed the information for you, only keeping the ages of the people (your input).

- Your goal is to count the amount of people that were not allowed into the nightclub. The minimum age limit to enter is 18.

Sample Input | Sample Output
------------ | -------------
`20 26 23 17 35 16 18 19 32 17 49`    | `3`

Your Input | Expected Output
------------ | -------------
`19 28 29 27 16 19 28 23 20 17 17 34 48 16 27 29 16 37 18 15`    | `6`

## Part 2
- The people that are not supposed to enter have somehow bypassed the machine and were let in! We have to quickly resolve this issue.
Your engineer friend created a system that would detect forged or suspicious IDs. If one of such was detected, their age would be by 100 smaller.
Meaning if a `16` year old would enter, their age after going through the machine would be `-84`. 

- Your goal is to count the amount of people that were flagged by this system.

Sample Input | Sample Output
------------ | -------------
`20 -84 34 21 -83 18 19`    | `2`

Your Input | Expected Output
------------ | -------------
`41 20 -82 19 -83 -86 19 -84 18`    | `4`

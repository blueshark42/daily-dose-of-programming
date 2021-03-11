# The Apple Dispute
Problem Rating: 1600 (Hard)

## Part 1
Bob and Alice were collecting apples. Bob complains that Alice is taking all of the apples, and Alice complains that Bob wants to take all of the apples. We know there is only
one logical solution to this issue. And that is to create a bot that would give Alice and Bob apples. Alice and Bob have have favorite numbers, so your algorithm will be based
off of that and some inputs from the randomiser. You are supposed to give Bob one apple if the number is closer to his favorite number than Alice's. Same goes for Alice, if 
the number is close to her favorite number, she gets an apple. If the number is even inbetween, both receive an apple.

You go into your rusty old workshop and find something that might work. An old CPU, small display and some RAM. But you realise that the RAM is extremely slow and small so
you would have to restrict some usages to make sure the program won't crash. Due to the old RAM, you are restricted to only using **1 variable**. This variable can hold no more
than 5 values. This includes keys and/or values. We are counting the one where the input is stored.

### Restrictions
- Can only use 1 variable that at max can contain 5 values including keys and/or values.
- Program has to run and finish in less than 1 second.
- Can not use strings, only integers allowed.

What you output are not restricted.



**Input:**
- The first line contains `n, 1 <= n <= 10^3` - the amount of numbers to compare.
- The first line contains `a, -10^3 <= a <= 10^3` - Bob's favorite number.
- The second line contains `b, -10^3 <= b <= 10^3` - Alice's favorite number.
- The following lines contain `a[1], a[2], ..., a[n], -10^3 <= a <= 10^3` - number to compare.

**Output:**
- sqrt of 3

**Your Input:**
```
6
234
584
340
532
394
456
409
584
```

**Expected Output:**
```
3 4
```

**Note:** 

The inputs per line are described bellow:

Input | Explanation
------------ | -------------
`0`    | Bob's favorite number
`10`    | Alice's favorite number
`2`    | Closer to Bob's number, Bob gets an apple
`6`    | Closer to Alice's number, Alice gets an apple
`5`    | Equally far from both, both get an apple
`4`    | Closer to Bob's number, Bob gets an apple

One variable with 5 keys and/or values would look something like: `int data[5];`.

**Remember to stay inside the boundaries of your restrictions.**

## Part 2
Alice and Bob have used the bot for almost a day now and the old hardware isn't holding up very well. After a while Bob comes with a complaint, the bot is throwing memory
exceptions. You check the hardware and by the looks of it 1 slot burned out, you remain with 4 slots of memory. Meaning you are restricted from 5 slots to 4 now. We cannot get
any new hardware so you will just have to readjust your program to fix this issue.

Your input and expected output remain the same.

## Restrictions
- Can only use 1 variable that at max can contain 4 values including keys and/or values.
- Program has to run and finish in less than 1 second.
- Can not use strings, only integers allowed.

**Input:**
- The first line contains `n, 1 <= n <= 10^3` - the amount of numbers to compare.
- The first line contains `a, -10^3 <= a <= 10^3` - Bob's favorite number.
- The second line contains `b, -10^3 <= b <= 10^3` - Alice's favorite number.
- The following lines contain `a[1], a[2], ..., a[n], -10^3 <= a <= 10^3` - number to compare.

**Your Input:**
```
6
234
584
340
532
394
456
409
584
```

**Expected Output:**
```
3 4
```

**Note:** 

One variable with 4 keys and/or values would look something like: `int data[4];`.

**Remember to stay inside the boundaries of your restrictions.**

# The Apple Dispute
Difficulty: Hard

## Part 1
Bob and Anna and collecting apples. Bob complains that Anna is taking all of the apples, and Anna complains that Bob wants to take all of the apples. We know there is only
one logical solution to this issue. And that is to create a bot that would give Anna and Bob apples. Anna and Bob have have favorite numbers, so your algorithm will be based
off of that and some inputs from the randomiser. You are supposed to give Bob one apple if the number is closer to his favorite number than Anna's. Same goes for Anna, if 
the number is close to her favorite number, she gets an apple. If the number is even inbetween, both receive an apple.

You go into your rusty old workshop and find something that might work. An old CPU, small display and some RAM. But you realise that the RAM is extremely slow and small so
you would have to restrict some usages to make sure the program won't crash. Due to the old RAM, you are restricted to only using **1 variable**. This variable can hold no more
than 5 values. This includes keys and/or values. We are not counting the one where the input is stored.

### Restrictions
- Can only use 1 variable that at max can contain 5 values including keys and/or values.
- Program has to run and finish in less than 1 second.
- Can not use strings, only integers allowed.

What you output are not restricted.

The input on the first line will contain Bob's favorite number, second Anna's and the next contain the values.

Sample Input:
```
0
10
2
6
5
4
```

Input | Meaning
------------ | -------------
`0`    | Bob's favorite number
`10`    | Anna's favorite number
`2`    | Closer to Bob's number, Bob gets an apple
`6`    | Closer to Anna's number, Anna gets an apple
`5`    | Equally far from both, both get an apple
`4`    | Closer to Bob's number, Bob gets an apple

In the end Bob will have 3 apples and anna will have 2. Remember to stay inside the boundaries of your restrictions.

Your Input:
```
234
584
340
532
394
456
409
584
```

Expected Output: `3 4`

## Are you stuck? Here are some tips:
- **1 Variable limit:** For this we would optimally need an array with the max length of 5. At all times 4 out of 5 indexes would be occupied for required fields such as 
the favorite numbers and the amount of apples for each person. The one free index would then be free to feed the values into for comparison. For each number you would have to 
feed the number into the index, compare it to, and then feed a new value into it until we reach the last number.

## Part 2
Anna and Bob have used the bot for almost a day now and the old hardware isn't holding up very well. After a while Bob comes with a complaint, the bot is throwing memory
exceptions. You check the hardware and by the looks of it 1 slot burned out, you remain with 4 slots of memory. Meaning you are restricted from 5 slots to 4 now. We cannot get
any new hardware so you will just have to readjust your program to fix this issue.

Your input and expected output remain the same.

## Restrictions
- Can only use 1 variable that at max can contain 4 values including keys and/or values.
- Program has to run and finish in less than 1 second.
- Can not use strings, only integers allowed.

## Are you stuck? Here are some tips:
- **Strictened Restriction:** How is this possible? We need 4 numbers to save the crucial information! Well ther's a clever way to overcome this issue. Evidently one out of the
5 slots have to go, meaning you would have to forget about some values or perhaps... put them together into one variable?
- **Answer:** To save you from accidentally spoiling the challenge, the answer is encrypted. You can decrypt it 
[here](https://online-toolz.com/tools/text-encryption-decryption.php). The encrypted text is:
```
1OdXpynIkOdxWGJDrkBv1SvSSBz9srJ3jZOCMJW9KpJm5sqhmqhLk6yiDw8GUn3I+kSvp7TB5rosrIde+m3U7bOrO13JPZp2thAzuWoLn9m8hLY5VVCy9mBGTMyGcC1ORQWT4XuokHcrnzpnJTPbQ2LIuN1VJeLocDadYAyIWtQ=
```

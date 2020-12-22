# Faulty Bit
Difficulty: Easy

## Part 1
- A client has sent their computer to your repair shop. They say on some occassions the computer does the opposite of what they want. After some research you find out
that the computer bugs out when there's a faulty bit, meaning that there is an invalid bit somewhere (neither 0 or 1). You have a machine that can go so deep into a computer
that it even let's you view individual bits, one byte per line (your input). 

- Your goal is to loop through the bytes and return `true` if no faulty bit is found, and return `false` if one or more are found.

Sample Input | Sample Output (current line, all lines)
------------ | -------------
`01101001`    | `(none, true)`
`01000101`    | `(none, true)`
`10111010`    | `(none, true)`
`01011201`    | `(false, false)`
`01110110`    | `(none, false)`

Your Input: 
```
01110101
00000000
10101010
11011010
01111011
01111111
01111011
01111010
11010010
00101210
11101101
10101000
```

## Part 2
- This time the faulty bit has caused all the bytes to group up and form one large line instead of being split up into individual bytes. Regardless of this, each byte still
has 8 bits.

- Your goal is to find the byte with the faulty bit and print the byte where the bit is located, while also printing the byte's position.



Sample Input: `01101011011101110111011100101010100011110110120101101010`

If we split these into individual bytes we would get:
```
01101011
01110111
01110111
00101010
10001111
01101201
01101010
```
From this we can see the faulty bit is in byte number 6, thus the answer would be `01101201 6`. (formatting does not matter)

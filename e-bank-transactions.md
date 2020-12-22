# Bank Transactions
Difficulty: Easy

## Part 1
We received a job to get the profits and losses of a bank. This itself seems like simple addition but the bank has informed us that the transactions are often huge.
These transactions are from the past year so we are expecting there to be a lot of numbers too. Each transaction will be on a separate line (your input).

- Your goal is to get the profit or loss of the bank and print it. Again, watch out these numbers will be large so make sure you use the proper variables.

Your Input:
```
98347573849
34573963422
-3457943932
-84356393
43763
3934857
3457438573
-3457345093
2347932558
4583484598
435897434
```

Expected Output: `136750623636`

## Part 2
It's been a year since the bank needed our help. They were so happy with our service that they are requesting our help again. Since we last met they have expanded to become
a global business. This means that there isn't only one currency. The first line will have a number that will be the core of the calculations as it shows the power of the
currencies. You will have to multiply this number with each currency by their power. It is explained under.

Sample Input:
```
1534

1984 3
2384 6
4359 29
-3248 21
165 2
-2395 9
-184 12
249 18
```

For example the first line here is the power of the currencies, `1534`. Each line has the currency value e.g `1984` and their respective powers `3`. To get the value of the
currency you would have to multiply the powers `1534 * 3` and sum it to the value, so the final calculation would be `1534 * 3 + 1984`. In this case the answer would be
`6586`.

- Your job is to get the gross profit or loss of the bank this year.

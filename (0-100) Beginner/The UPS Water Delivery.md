# The UPS Water Delivery
Problem Rating: 20 (Beginner)

## Part 1
The UPS driver arrived to your home. There is one problem, he is confused and forgot how many bottles are in the truck.
These bottles are split into 2 batches, one on the front side, and on in the back.

He's asking for your help to help him count the amount of bottles in the truck.

**Input:**
- The first line contains `a, 1 <= a <= 500` and `b, 1 <= b <= 500` - the amount of bottles in each batch.


**Output:**
- The sum of all the bottles found in the truck.


**Your Input:**
```
234 256
```

**Expected Output:**
```
490
```

## Part 2
Your manager decides they liked the water you ordered and would like to order them again in a much larger quantity.
This time the water bottles won't fit into a small truck and will require a larger truck to carry them.

This time the water bottles won't fit into 2 large batches. Instead they are split into multiple smaller batches.

**Input:**
- The first line contains `n, 1 <= n <= 10` - the amount of batches
- The second line contains `a[1], a[2], ..., a[n]` - the batches. `a, 1 <= a <= 1000`.


**Output:**
- The sum of all the bottles found in the truck.


**Your Input:**
```
5
2358 4385 368 2946 4985
```

**Expected Output:**
```
15042
```
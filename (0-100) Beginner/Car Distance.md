# Car Distance
Problem Rating: 30 (Beginner)

## Part 1
Your teacher wants the class to do something as a project. You come up with a nice idea. You will go to TESCO daily and check each parking slot.
You will filter out each parking slot and find the 2 cars the furthest from each other.

You will only check one row for now. Each line you will receive as an input is the position in the row of the vehicle. Your starting point is from the center,
meaning that since your starting point is 0 there are 100 slots to the right and 100 to the left. These slots are represented in a grid from the range of -100 to 100.

**Input:**
- First input contains `a`, the car furthest to the right. `b < a <= 1000`.
- Second input contains `b`, the car furthest to the left. `a > b >= -1000`.

**Output:**
- Output the slot difference between the 2 cars.

**Your Input:**
```
43
-29
```

**Expected Output:** 
```
72
```

**Note:** Why is the expected output 72? We're trying to calculate the distance between 2 objects. 0 would mean they are inside each other / colliding and anything
higher would mean they are a certain amount of units away from each other. Of course being `-5` units from something is impossible. You cannot be -5 meters from something.
That is why we need the absolute value of this 2 objects summed to each other to get the total distance inbetween the 2 vehicls.
The 43 in this case would mean that the car is 43 slots to the right from our reference point, and the second car would be -29 from the reference point. A negative number
signifies that the vehicle is 29 units to the left. Meaning there is a total of 72 slots inbetween them.


## Part 2
The teacher is impressed with the project, but she wants to see how clever you really are.
She wants you to solve the problem in Part 1 without the use of `abs()` or any other built-in function.

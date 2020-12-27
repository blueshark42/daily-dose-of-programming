# Car Distance
Difficulty: Beginner

## Part 1
Your teacher wants the class to do something as a project. The theme is `interesting data`. You come up with a nice idea. You will go to TESCO daily and check each parking slot.
You will filter out each parking slot and find the 2 cars the furthest from each other.

Your parking lot for now will only check one row. Each line you will receive as an input is the position in the row of the vehicle. Your starting point (0) is from the center,
meaning that since your starting point is 0 there are 100 slots to the right and 100 to the left. These slots are represented in a grid from the range of -100 to 100.

You will get the values of 2 vehicles furthest from each other.

- Your goal is to print the distance from the 2 furthest vehicles. You will receive 2 inputs.

Your Input:
```
43
-29
```

Expected Output: `72`

If you want to make sure your program works fine, you can use any values for x and y from the range `-100 - 100`.

## Info
**Expected Output:** Why is the expected output 72? We're trying to calculate the distance between 2 objects. 0 would mean they are inside each other / colliding and anything
higher would mean they are a certain amount of units away from each other. Of course being `-5` units from something is impossible. You cannot be -5 meters from something.
That is why we need the absolute value of this 2 objects summed to each other to get the total distance inbetween the 2 vehicls.
The 43 in this case would mean that the car is 43 slots to the right from our reference point, and the second car would be -29 from the reference point. A negative number
signifies that the vehicle is 29 units to the left. Meaning there is a total of 72 slots inbetween them.

## Part 2
This part will just increase the challenge slightly, but you might have completed it from part 1 already. 

The only challenge this part requires is that you not use any built-in function to convert the negative numbers into positive ones, such as `abs()`.

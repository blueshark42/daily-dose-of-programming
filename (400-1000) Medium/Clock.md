# Clock

Problem Rating: 500 (Medium)

## Part 1

You are working at an office where weird things are happening and your clock broke. Therefore your task is to create a working clock that
counts from X to Y in a time span of Z minutes. Format: H:MM

For example, `clock(2, 1)` should count from `0:00` to `2:00` in 1 minute.

- Your goal is to create the working clock

**Input:**

- Call to the function in your code.

```c
clock(6, 3.5);
```

**Expected Output:** A clock ticking from 0:00 -> 6:00 in a time span of 3.5 mins.

**Note:** You can assume inputs are always valid although it is a nice extra challenge if you fix edge cases such as these :)


## Part 2
Update the clock that the following requirements are met:
- Format interchangable (24h, 12h)
- Invalid inputs are handled
- Clock goes from time A to time B such as 10:30, 18:43 (always in 24h format input)

The way you handle time types is on you, you can use bools or enums.

Examples:
```c
// clock(start_time, end_time, use_24h_format, total_time_mins)
clock("3:40", "7:00", true, 3.5);
clock("12:00", "24:00", false, 1);

// invalid inputs
clock("3.1", 2.4, false, 1);
clock("12:00", "-12:30", false, 5);

clock("12:00", "11:19", true, 2); // Valid, 23h 59m cycle
clock("12:00", "12:00", true, 2); // Valid, 24h cycle
```

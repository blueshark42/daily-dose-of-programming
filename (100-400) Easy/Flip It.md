# Flip It!
Problem Rating: 300 (Easy)

## Part 1
Your friend is new to programming and he needs you to help him with something. A part of his program requires you to flip values from 2 numbers. Such as `a=b` and `b=a`.

**Input:**
- Your first input will `n`, be the amount of test cases provided
- Your following line will contain `a` and `b`, the 2 numbers to be flipped

**Output:**
- Print `a` and `b` with a space inbetween

**Your Input:**
```
5
1 3
0 1
1 1
593 293
4568576 345784
```

**Expected Output:**
```
3 1
1 0
1 1
293 593
345784 4568576
```
**Note:** You must flip the variables, it is not allowed to just print the 2nd input as the 1st number.

## Part 2
Well that works but what if we don't know what data type we are trying to flip? Well, our friend helped a bit with this code but for some reason it doesn't work. Can you fix it?

### Requirements
- **Language:** C++

**Your Input:**
```cpp
void flip_val(void* a, void* b) {
    void *temp = a;
    a = b;
    b = temp;
}
```

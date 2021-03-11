# Robot Artificial Intelligence
**Hard Division Finale**

## Part 1
We are trying to impress some people to get our robotics team some exposure. We have a team of skilled people working on the actual robot, and a team of skilled people
working on the robot's brain. You are the person that needs to work on the robot's emotions, crazy right. 

This works by moving little gold pins around and connecting them
to connect and create a path for the electricty to pass and create an electric circuit. A close electric circuit makes the robot follow that emotion (for some reason). At this point in time
it can only follow one emotion, so we don't have to worry about multiple emotions.

The gold pins can have one out of the four rotations possible while moving around. The pin starts facing to the right. Also the robot only recognises a few instructions.
The recognised instructions can be seen here:

**Input:**
- The first line will contain `n, 0 <= n <= 100` - the amount of instructions present.
- Each following line will contain the char `c` - instruction, and a value `x`. In some situations `x` might be `x mod 90 = 0`, otherwise it will be `1 <= x <= 100`.

**Output:**
- Print the final ID of the pin.

**Your Input:**
```
F 23 
L 90 
A 12 
F 4 
R 90 
L 90 
R 360 
F 20
D 3
A 5
L 90
F 2
A 1
D 4
L 90
F 12
```

**Expected Output:**
```
120
```

**Note:** 

Instruction | Action
------------ | -------------
`L x`    | Rotates pin counter-clockwise by x degrees
`R x`    | Rotates pin clockwise by x degrees
`F x`    | Moves the pin forward by x slots, depending on where the pin is facing
`A x`    | Moves the pin right by x slots, regardless of the direction of the pin
`D x`    | Moves the pin left by x slots, regardless of the direction of the pin

Take the following input as an example:
```
L 90
F 14
L 270
A 2
F 4
```

`L 90` - rotate left by 90, essentially pointing us up.

`F 14` - move forward by 14 pins, on the Y axis (since we are facing upwards)

`L 270` - roate left by 270 degrees, pointing us to the right.

`A 2` - move us to the left regardless of the rotation, meaning we move to the left

`F 4` - move us foward by 4

After these instructions we end up on pin `x:2 y:14`. To get the pin ID we need to multiply the x and y position of the pin, `2 * 14`. Our ID thus would be `28`.


Your Input:
```
F 23
L 90 
A 12
F 4
R 90
L 90
R 360
F 20
D 3
A 5
L 90
F 2
A 1
D 4
L 90
F 12
```

Expected Output: `120`

## Part 2
The robot is working correctly but to make it more realistic and human like we would like it to be more randomised. The actual commands will not have a random chance to
execute but rather they will execute **every instruction with an even index and every instruction with an odd index after.**

Your input and and output  goals are the same. There is no expected output for this question so you have to be sure about this part. :)

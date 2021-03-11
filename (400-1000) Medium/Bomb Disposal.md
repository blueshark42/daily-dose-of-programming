# Bomb Disposal
Problem Rating: 900 (Medium)

## Part 1
Crisis in the city! A van crashed into the city centre's fountain and police are called over as it is believed there is a series of objects that might be or contain
explosives. Sending in a [bomb disposal](https://en.wikipedia.org/wiki/Bomb_disposal) unit won't help as the note recovered from the one states the following:
```
There is a series of boxes in the van, some contain enough explosives with chemicals inside that will kill anyone in a range of 5km. 
Any physical damage to the bomb or it's wires will trigger the bomb and blow it up. 
Some are empty but touching them will trigger it all too. Good luck :^)
```

After using a robot to closely inspect the bomb they found that they are wired to a main control unit. This control unit can be hijacked by injecting malicious code.
After injecting this malicious code, the control unit has been hijacked, only the vital functions are left clear. The boxes send messages to the control unit.
If we read these inputs we notice that the boxes containing explosives send a string containing the word `bomb` (can be `BOMB`, `boMb` `bOMb`, ...), and the clean ones
send a string without containing the word `bomb`.


**Input:**
- The first line contains, `n, 1 <= n <= 10` - the amount of bomb inputs.
- Each following line contains a string, `s` with differing lengths that you have to check.


**Output:**
- The amount of explosives in the van.

**Your Input:**
```
7
hi im totally not an explosive...im just a afhf
igrhtioghjtroihgiofthjgoitfj438978437ghu45ty
im gonna go boom cuz im a bomb
thirtyseventhousandandthirtysevenmomentsforyoutodefusethisbOMB
encrt094j43iojtbojbm4b
lollibomb go boom boom boom
akfortysevenhlavnerovnovahawinkwinkbamwn
```

**Expected Output:**
```
3
```

**Note:** The answer is `3` because 3 out of the 7 strings contain the word `bomb`.

## Part 2
The last container contains the chemical. It needs to be disabled as well to make sure the entire van is safe for the police to move in. The issue is this container is not
sending regular messages as the other bombs. It has 5 pins that need to be physically turned either on or off. To deduct which pin we need to have on or off it sends
10 lines of data to us. The first 5 lines denote what each following line has to match in order for it to be `true`, otherwise it would be `false`.

For example 4 lines of data could look something like:
```
apple
orange
my name is apple
my name is strawberry
```


**Input:**
- The first 5 lines contain the string the messages have to contain.
- The last 5 lines contain the string the flags have to check for.


**Output:**
- The amount of pins that have to be turned on.

**Your Input:**
```
1234
giotn
horse
ratmonkey
qwerty
9804378943897123897540812349058
jiobjgifhbingfidifj5iodfgnngdfuihviunb
cathoursehowsehouyresemaorsecaursehorrsehorseahjg
ratmonkeeyratmoneky55i95gj5ramtpoe4jtremenw
qwrtysdfghjwertyuiocvbnmfghjklqwertytedrtfyghbujn
```

**Expected Output:**
```
3
```

**Note:** 

The first line denotes what we have to find in the string `my name is apple`. The word `apple` is found in the string `my name is apple` so the pin would have to be turned on
thus meaning we should return `true`.

The second line denotes that we have to find `orange` in the string `my name is strawberry`. Going off of the logic used previously, this word is not found thus the return
value for this line would be `false`.



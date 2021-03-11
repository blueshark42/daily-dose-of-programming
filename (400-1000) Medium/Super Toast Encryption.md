# Super Toast Encryption
Problem Rating: 600 (Medium)

## Part 1
The engineers at Super Toast require your help as their master password got corrupted and encrypted. Without this key they will not be able to log into the system
so it is mandatory we get this password back. They say that the encryption uses a simple algorithm to encrypt the string. **The encryption goes through every character
and adds 4 to it's value plus the position of the character in the string.**

For example take the encrypted string: `ABCD`. To decrypt it you would need to add 2 to each character. `A+2, B+2, ...` and add their positions in the string `A+1, B+2, ...`.
After decryption the string should be: `DEFG`.

**Input:**
- The first line will contain the string `s` - the encrypted string.


**Output:**
- Print the decrypted string.

**Your Input:**
```
j4Ak7BkdAKf85N694Ni
```

**Expected Output:**
```
m8Fq>JtnLWsFD^GKGb~
```



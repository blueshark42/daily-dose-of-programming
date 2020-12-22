# Super Toast Encryption
Difficulty: Medium

## Part 1
- The engineers at Super Toast require your help as their master password got corrupted and encrypted. Without this key they will not be able to log into the system
so it is mandatory we get this password back. They say that the encryption uses a simple algorithm to encrypt the string. **The encryption goes through every character
and adds 4 to it's value plus the position of the character in the string.**

- For example take the encrypted string: `ABCD`. To decrypt it you would need to add 2 to each character. (A+2, B+2, ...) and add their positions in the string (A+1, B+2, ...).
After decryption the string should be: `DEFG`.

- Your job is to decrypt and print the decrypted string.

Your Input: `j4Ak7BkdAKf85N694Niy5`

### Are you stuck? Here are some tips:
- **Decryption:** As before we will need to get the ASCII values of the characters and modify them.

## Part 2
- After successfully decrypting their master password you find out that this password was only to get access to get the master password. This is the time where you will actually
be getting the master password. Unfortunately, their encryption for this is stronger than the last one and requires a bit more mathemathics to solve.

- **The encryption goes through every character, divides their values by 2. The ones that remain even have their values increased by 6, the ones that are odd have their
values increased by 9.**

Your input remains the same.

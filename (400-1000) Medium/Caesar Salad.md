# Caesar Salad
Problem Rating: 400 (Medium)

## Part 1
Your friend told you today that he has a super good idea that you guys could could create for the technology school project! But he is afraid that other students will eavesdrop
on your special idea. So he had a brilliant idea. He would encrypt the message and send it over to you. To make this extra secure, 
he didn't tell you the [cipher](https://en.wikipedia.org/wiki/Cipher). This means you will have to find out what the algorithm is to decrypt this message.

The cipher is not difficult, read everything bit of information you got in this challenge as it might contain clues! If you are stuck you can check the help found under.
But try to solve it by yourself :).

- Your goal is to decrypt your friend's message and find the password hiding in it.

**Input:**
- The only line will contain the string `s` - the encrypted message.


**Output:**
- The decrypted message your friend sent.

**Your Input:**
```
Fvb ohcl mvbuk aol whzzdvyk! Aol whzzdvyk pz: WvjpahjJpjh_e84
```

**Expected Output:**
```
You have found the password! The password is: PocitacCica_x84
```

**Note:** The cipher used in this problem is indeed, Caesar's favorite cipher.

## Part 2
You have successfully received your friend's message. You need to let him know that you have received it so he would know that the message got through.

You can shift the letters however much you want, but they must contain the original decrypted password in them at the end so your friend would know it's a 
legitimate message coming back.

**Input:**
- You give the input. **The input must have a length of at least 16.**


**Output:**
- Encrypted message that you sent back.


**Your Input:**
```
YOUR INPUT
```

**Expected Output:**
```
YOUR ENCRYPTED INPUT
```
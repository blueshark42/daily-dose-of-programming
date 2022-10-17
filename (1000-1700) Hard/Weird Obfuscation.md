# Weird Obfuscation

Problem Rating: 1300 (Hard)

## Part 1

You are presented with this piece of Python code. Your task is to look at it and predict it's course of execution.
Simply predict how it will execute, what it will do and how long it will take. There is no 100% correct answer here.

The code contains no errors. You can create a copy of the program to help in deobfuscation but you cannot run the program.

**Code:**

```py
from time import sleep as XhIE

def secret_func(a,b):
	c = a*0x3C+1
	for i in range(c):
		XhIE(b*0x3C/c)
		h,q=i//0x3C,i%0x3C
		g = (q,"0"+str(q))[q<0xA] # This always evaluates to the value of q
		print("%s:%s"%(h, g))

secret_func(0x6,0x1)
```


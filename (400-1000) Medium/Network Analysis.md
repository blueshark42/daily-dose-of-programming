# Network Analysis
Problem Rating: 800 (Medium)

## Part 1
Our network infrastructure has been attacked by hackers! They keep flooding us with malicious network requests to our servers that make us run out of RAM!
Blocking their IPs isn't a choice, as they are using [Virtual Private Networks](https://en.wikipedia.org/wiki/Virtual_private_network).

They have deleted every log of the attack, but we managed to save the ones stored on the [Proxy Server](https://en.wikipedia.org/wiki/Proxy_server).
The traffic passing through the proxy servers are encrypted, but we can easily decrypt them as we have the key.
After decrypting we can read through the requests. The requests clearly show some kind of pattern between legitimate and malicious requests. It's on you to find this pattern.


**Input:**
- The first line contains `n, 1 <= n <= 10` - the amount of requests.
- The following lines contain the string `s` - the request.


**Output:**
- Print the amount of malicious requests sent to us today.

**Your Input:**
```
7
GT1WEB3FGH4UTR6S
K3OG496DFO4NTI5N
GT1WEB3FGH4UTR
GTAWEBXFGHTUTRQS
O456TMD645OTH45FHR
KGPIOTRJHIORTHTR
O24OORG465GIO5JK
```

**Expected Output:**
```
4
```

**Note:** You have to find the traffic that stands out from the rest. There are more valid requests than malicious on one occassion.

## Part 2
- After some analysis we found out that the requests can be sent to any server to make them run out of RAM. We will get them with their own weapon!

- Your goal is to get all the malicious requests (print them) so we know which we can send back to the attackers and attack them back.

**Input:**
- The first line contains `n, 1 <= n <= 10` - the amount of requests.
- The following lines contain the string `s` - the request.


**Output:**
- Print the malicious requests sent.

**Your Input:**
```
7
GT1WEB3FGH4UTR6S
K3OG496DFO4NTI5N
GT1WEB3FGH4UTR
GTAWEBXFGHTUTRQS
O456TMD645OTH45FHR
KGPIOTRJHIORTHTR
O24OORG465GIO5JK
```

**Expected Output:**
```
GT1WEB3FGH4UTR
GTAWEBXFGHTUTRQS
O456TMD645OTH45FHR
KGPIOTRJHIORTHTR
```

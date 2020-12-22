# Network Analysis
Difficulty: Medium

## Part 1
- Our network infrastructure has been attacked by hackers! They keep flooding us with malicious network requests to our servers that make us run out of RAM!
Blocking their IPs isn't a choice, as they are using [Virtual Private Networks](https://en.wikipedia.org/wiki/Virtual_private_network).
- They have deleted every log of the attack, but we managed to save the ones stored on the [Proxy Server](https://en.wikipedia.org/wiki/Proxy_server).
The traffic passing through the proxy servers are encrypted, but we can easily decrypt them as we have the key.
After decrypting we can read through the requests. The requests clearly show some kind of pattern between legitimate and malicious requests. It's on you to find this pattern.

- Your goal is to count the amount of malicious requests sent to us today.

Here we can see the logs by our proxy server.

Network Requests | Request Legitimacy
------------ | -------------
`GT1WEB3FGH4UTR6S`    | [deleted]
`K3OG496DFO4NTI5N`    | [deleted]
`GT1WEB3FGH4UTR`      | [deleted]
`GTAWEBXFGHTUTRQS`    | [deleted]
`O456TMD645OTH45FHR`    | [deleted]
`KGPIOTRJHIORTHTR`    | [deleted]
`O24OORG465GIO5JK`    | [deleted]

Request | Value
------------ | -------------
daily-request-limit    | 2309


- Using this table we can determine that amount of malicious requests we received. For example, if we have received 2 malicious requests. 
To get the amount of malicious requests sent to us today, we would have to multiply
the amount of requests with `daily-request-limit`. In this case, our answer would be `2 * 2309` which equals `4 618`.

### Are you stuck? Here are some tips:
- **Parsing:** Computers essentially don't know the difference between numbers and letters. It's all just numbers for them. 
Each letter has a numeric value that can be found in an
[ASCII Table](https://www.asciitable.com/). If you'd like to read more about what ASCII is, check this out -> [ASCII - Wikipedia](https://en.wikipedia.org/wiki/Ascii)
- **Malicious Request Pattern:** The malicious requests have a pattern, analyze each and find ones that stand out. We know at least a few of the requests are legitimate,
as our company needs to communicate with other servers as well. This means there is more than 1 legitimate request.
- **Extra Help:** Only read this if you're extra lost. We can go through the requests and realize that legitimate requests have a numbers and the length 16.
This means we will have to first check if the length checks out, and after that we can go through each request and check if they contain a number from 0-9.

## Part 2
- After some analysis we found out that the requests can be sent to any server to make them run out of RAM. We will get them with their own weapon!

- Your goal is to get all the malicious requests (print them) so we know which we can send back to the attackers and attack them back.

### Are you stuck? Here are some tips:
- **Where to save the requests:** In this case a dynamic array would be the best. If you don't know how to use them, learn to use them or just take the easy way out and create 
a static array. Push them into it and then print them out to get the answer.

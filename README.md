## Challenge Difficulties
- b - Beginner, those with little to no experience with programming
- e - Easy, those with little experience with coding
- m - Medium, a bit harder than easy but doesn't require a lot more skills
- h - Hard, requires good progamming skills, while coming up with clever solutions
- n - Nightmare, requires elite programming and problem solving skills to complete. They act as boss levels or real world challenges.

## Challenge difficulties compared to real world challenges
Most real world challenges that are considered easy/intermediate would be classed as Nightmare. The actual difficult challenges would be about 2-3x as hard as Nightmare challenges
found here.

## What to expect with programming?
Programming is just giving your computer instructions through some kind of programming language which then will be either interpreted or compiled into instructions
that the computer can understand.

### Programming Languages
It takes quite a while to learn, but eventually when you learn it, it becomes easier. It is like riding a bike or driving a car. You can learn to drive a ferrari and be perfect
with it, then you change to a lambo and it feels a bit odd but with a few hours in it you would feel comfortable with it as well.

The hard part is that you will have to learn to think differently, you will have to think outside the box. But for the languages theres a lot of them. Each good for different
things. 

## How to learn and improve
Watching "How to learn XYZ in ABC minutes" won't teach you a lot. The best way of learning is to write and read code. Just as learning to drive or ride a bike.
It will take a while and a lot of effort. 
- If you decide to work on something, choose something over your comfort zone. Something a bit difficult but not super difficult that you'd get stuck on it for ages.

## Skills required per difficulty
### Beginner
- Basic arithmetics
- Basic data types, 
- I/O

### Easy
- If 
- For loops
- Functions
- Basic arrays
- Mathemathics

### Medium
- File I/O
- Dynamic arrays
- String manipulation
- Syntax knowledge
- Lower level computing knowledge
- Algorithms

### Hard
- Object oriented programming (OOP)
- Knowledge about memory - heap / stack
- Memory manipulation
- Memory addressing
- Safe programming
- Good problem solving skills

### Nightmare
- Sophisticated problem solving skills
- Sophisticated programming skills


.InputField {
  margin: 0 25vw 0 25vw;
}

.InputField-input {
  color: white;
}

input,
textarea {
  font-family: "Ubuntu", sans-serif;
  display: block;
  margin: 10px;
  padding: 5px;
  border: none;
  font-size: 22px;
}

textarea:focus,
input:focus {
  outline: 0;
}

input.InputField-input,
textarea.InputField-input {
  font-size: 48px;
  font-weight: 300;
  border-radius: 2px;
  margin: 0;
  border: none;
  width: 80%;
  background: rgba(255, 255, 255, 0);
  transition: padding-top 0.2s ease, margin-top 0.2s ease;
  overflow-x: hidden;
}

input.InputField-input + label,
textarea.InputField-input + label {
  display: block;
  position: relative;
  white-space: nowrap;
  padding: 0;
  margin: 0;
  width: 10%;
  border-top: 1px solid darkslateblue;
  -webkit-transition: width 0.4s ease;
  transition: width 0.4s ease;
  height: 0px;
}

input.InputField-input:focus + label,
textarea.InputField-input:focus + label {
  width: 80%;
}

input.InputField-input:focus,
input.InputField-input:valid {
  padding-top: 35px;
}

textarea.InputField-input:valid,
textarea.InputField-input:focus {
  margin-top: 35px;
}

input.InputField-input:focus + label > span,
input.InputField-input:valid + label > span {
  top: -100px;
  font-size: 22px;
  color: white;
}

textarea.InputField-input:focus + label > span,
textarea.InputField-input:valid + label > span {
  top: -150px;
  font-size: 22px;
  color: white;
}

input.InputField-input:valid + label,
textarea.InputField-input:valid + label {
  border-color: white;
}

input.InputField-input:invalid,
textarea.InputField-input:invalid {
  box-shadow: none;
}

input.InputField-input + label > span,
textarea.InputField-input + label > span {
  font-weight: 300;
  margin: 0;
  position: absolute;
  color: #8f8f8f;
  font-size: 48px;
  top: -66px;
  left: 0px;
  z-index: -1;
  -webkit-transition: top 0.2s ease, font-size 0.2s ease, color 0.2s ease;
  transition: top 0.2s ease, font-size 0.2s ease, color 0.2s ease;
}

input[type="submit"] {
  -webkit-transition: opacity 0.2s ease, background 0.2s ease;
  transition: opacity 0.2s ease, background 0.2s ease;
  display: block;
  opacity: 0;
  margin: 10px 0 0 0;
  padding: 10px;
  cursor: pointer;
}

input[type="submit"]:hover {
  background: #eee;
}

input[type="submit"]:active {
  background: #999;
}

input.InputField-input:valid ~ input[type="submit"],
textarea.InputField-input:valid ~ input[type="submit"] {
  -webkit-animation: appear 1s forwards;
  animation: appear 1s forwards;
}

input.InputField-input:invalid ~ input[type="submit"],
textarea.InputField-input:invalid ~ input[type="submit"] {
  display: none;
}

@-webkit-keyframes appear {
  100% {
    opacity: 1;
  }
}

@keyframes appear {
  100% {
    opacity: 1;
  }
}

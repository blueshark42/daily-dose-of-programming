# Infinite Assembly
- Difficulty: Nightmare (Elite)
- This is an extremely difficult challenge. These are the elite challenge series. Only attempt if you are comfortable with challenges with lower difficulties. Good Luck.

## Part 1
It's time for the annual WOT (World of Technology) event. You chose to attend as a competitor in the programming and problem solving section.
You receive the problem given by the admins.

You have a handheld game machine in your hand. The machine keeps getting stuck because a chain of assembly instructions get stuck in an infinite loop.
Your objective is to find, identify and stop the program when an infinite loop is detected. When terminated because of an infinite loop it is required to
print out the value in the accumulator where the values from `acc` are saved.

For example take your input:
```
nop +0
acc +1
jmp +4
acc +3
jmp -3
acc -99
acc +1
jmp -4
acc +6
```
The machine recognises 3 types of instructions: nop, acc and jmp. After the command there is a signed value that belongs to the command.

Instruction | Action
------------ | -------------
`nop`    | No-Operation, does nothing. Execute the instruction right after the no-op.
`acc`    | Add X to the accumulator. The accumulator's initial value is 0.
`jmp`    | Jumps X instructions relative to itself. `jmp -5` would mean you would have to jump 5 instructions back, while `jmp 5` would mean you would have to jump 5 instructions further down, skipping the ones inbetween. `jmp 1` would continue to the next instruction and not skip anything.

The instructions are visited in the following order:
```
nop +0  | 1
acc +1  | 2, 8(!)
jmp +4  | 3
acc +3  | 6
jmp -3  | 7
acc -99 |
acc +1  | 4
jmp -4  | 5
acc +6  |
```

Your goal is to print the value in the accumulator after executing the same instruction twice (infinite loop).

In this case the value in the accumulator would be `5`.

## Part 2
Your goal in this section will be to change 1 instruction that would make the program leave the infinite loop and execute successfully.
For example changing one of the instructions from `jmp` to `nop` or from `nop` to `jmp` will result in the program running and terminating after executing the last instruction.

You **cannot** modify the values belonging to the instruction.

Your input remains the same.

## Good Luck

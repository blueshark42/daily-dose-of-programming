# bob, anna, annaX, bobX, num
memory = [0, 0, 0, 0, 0]

# bob, anna, annaX_bobX, num
#memory = [0, 0, 0, 0] # for part 2


def part1_solution():
    with open('apple_dispute_input.txt') as file:
        memory[0] = (int(file.readline().strip()))
        memory[1] = (int(file.readline().strip()))

        for _ in range(4):
            memory[4] = int(file.readline().strip())

            if abs(memory[0] - memory[1]) / 2 > memory[4]:
                memory[2] += 1
            elif abs(memory[0] - memory[1]) / 2 < memory[4]:
                memory[3] += 1
            else:
                memory[2] += 1
                memory[3] += 1

    return [memory[2], memory[3]]


def part2_solution():
    with open('apple_dispute_input.txt') as file:
        memory[0] = (int(file.readline().strip()))
        memory[1] = (int(file.readline().strip()))

        for _ in range(4):
            memory[3] = int(file.readline().strip())
            
            if abs(memory[0] - memory[1]) / 2 > memory[3]:
                memory[2] += 10
            elif abs(memory[0] - memory[1]) / 2 < memory[3]:
                memory[2] += 1
            else:
                memory[2] += 11

    return [int(i) for i in str(memory[2])]

print(part1_solution())
# print(part2_solution())


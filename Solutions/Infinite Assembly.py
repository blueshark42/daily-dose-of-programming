def execute_command(command_list):
    reg = 0
    line = 0
    executed_already = []

    while line not in executed_already:
        executed_already.append(line)

        command = command_list[line]
        key = command['command']
        val = command['value']

        if '+' in command['value']:
            val = int(command['value'][1:])
        else:
            val = int(command['value'])


        if key == 'acc':
            reg += val
            line += 1

        elif key == 'jmp':
            line += val

        elif key == 'nop':
            line += 1

        if line >= len(command_list):
            return reg, True

    return reg, False


def part1_solution():
    command_list = []
    with open('inputs/input8.txt') as fp: # Reading from file in this case
        lines = fp.readlines()

        for line in lines:
            line = line.rstrip().split()
            command_list.append({
                'command': line[0],
                'value': line[1]
            })

    part2_solution(command_list)


def part2_solution(command_list):
    for command in command_list:
        if 'jmp' in command['command']:
            command['command'] = 'nop'
            val, finished = execute_command(command_list)

            if finished:
                print(val, finished)
                break
            else:
                command['command'] = 'jmp'


part1_solution()

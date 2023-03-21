# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/123806/

import re
inp = input()
pos = sorted([int(num) for num in re.findall("\+\d+", inp)], reverse=True)
neg = sorted([int(num) for num in re.findall("\-\d+", inp)], reverse=True)
output = ""
sum_ = 0
if len(pos) == len(neg):
    for num1, num2 in zip(pos, neg):
        output += f"+{abs(num1)}-{abs(num2)}"
        sum_ += abs(num1) - abs(num2)
elif len(pos) > len(neg):
    selected_pos = pos[:len(neg)]

    for num1, num2 in zip(selected_pos, neg):
        output += f"+{abs(num1)}-{abs(num2)}"
        sum_ += abs(num1) - abs(num2)

    other_pos = pos[len(neg):]
    if sum_ < other_pos[0]:
        output += f"-{abs(other_pos[0])}"
        sum_ -= abs(other_pos[0])
    else:
        output += f"+{abs(other_pos[0])}"
        sum_ += abs(other_pos[0])
    for num in other_pos[1:]:
        output += f"+{abs(num)}"
        sum_ += abs(num)
elif len(neg) > len(pos):
    selected_neg = neg[:len(pos)]
    for num1, num2 in zip(pos, selected_neg):
        output += f"+{abs(num1)}-{abs(num2)}"
        sum_ += abs(num1) - abs(num2)
    other_neg = neg[len(pos):]
    if sum_ < 0:
        output += f"+{abs(neg[-1])}"
        sum_ += abs(neg[-1])
        for num in other_neg[:-1]:
            output += f"-{abs(num)}"
            sum_ -= abs(num)
    else:
        for num in other_neg:
            output += f"-{abs(num)}"
            sum_ -= abs(num)

output += f"={sum_}"
print(output)
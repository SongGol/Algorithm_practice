from itertools import permutations

n = int(input())
brakets = input().split()

res = []

def checkBraket(left, right, sign):
    if sign == '>':
        return left > right
    else:
        return left < right

def checkInequalities(selected_nums):
    flag = False
    for i in range(len(selected_nums) - 1):
        if not checkBraket(selected_nums[i], selected_nums[i + 1], brakets[i]):
            flag = True
            break
    return True if not flag else False

perm = permutations('0123456789', n + 1)
inversed_perm = permutations('9876543210', n + 1)
for i in list(inversed_perm):
    if checkInequalities(i):
        res.append("".join(i))
        break
for i in list(perm):
    if checkInequalities(i):
        res.append("".join(i))
        break

print(res[0], res[1], sep='\n')
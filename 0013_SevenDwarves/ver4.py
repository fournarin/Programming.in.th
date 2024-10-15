n = []
for i in range(9):
    n.append(int(input()))

sum_val = -100
for num in n:
    sum_val += num

for i in range(9):
    for j in range(i + 1, 9):
        if n[i] + n[j] == sum_val:
            n[i] = 0
            n[j] = 0
            break

for num in n:
    if num != 0:
        print(num)
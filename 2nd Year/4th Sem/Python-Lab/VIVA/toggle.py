import random

new_list = []
original_list = []

for _ in range(100):
    n = random.randint(1, 100)
    original_list.append(n)

flag = True

while original_list:
    if flag:
        new_list.append(min(original_list[:3]))
    else:
        new_list.append(max(original_list[:3]))
    original_list = original_list[3:]
    flag = not flag

print(new_list)

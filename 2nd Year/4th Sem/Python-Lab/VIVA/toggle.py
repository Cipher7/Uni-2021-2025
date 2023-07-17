import random
new = []
l = []

for i in range(0,100):
    n = random.randint(1,100)
    l.append(n)

flag = True

while len(l) != 0:
    if(flag):
        new.append(min(l[0:3:]))
        l.pop(l.index(min(l[0:3:])))
        flag = False
    else:
        new.append(max(l[0:3:]))
        l.pop(l.index(max(l[0:3:])))
        flag = True

print(new)


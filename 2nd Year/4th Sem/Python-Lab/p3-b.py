st1 = input("Enter string 1 : ")
st2 = input("Enter string 2 : ")

len1 = len(st1)
len2 = len(st2)

if len1>len2:
    longest = st1
    shortest = st2
else:
    longest = st2
    shortest = st1

count = 0

for i in range(len(shortest)):
    if st1[i] == st2[i]:
        count += 1

print("Ratio : ",str(count/len(longest)))

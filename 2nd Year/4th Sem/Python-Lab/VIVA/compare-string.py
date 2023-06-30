st1 = input("Enter string 1 : ")
st2 = input("Enter string 2 : ")

if st1 == st2:
    print("Both are equal")

if st1 is st2:
    print("Comparison done using 'is' operator. Strings are equal")

if st1 > st2:
    print("String 1 is larger")
elif st1 < st2:
    print("String 2 is larger")

print("String after removing whitespace : ")
print(st1.strip())
print(st2.strip())

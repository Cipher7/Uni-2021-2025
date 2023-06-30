st = input("Enter a string : ")

words = st.split()
digits=0
up=0
low=0

for ch in st:
    if ch.isdigit():
        digits += 1
    elif ch.islower():
        low += 1
    elif ch.isupper():
        up += 1

len_words = len(words)

print("Uppercase characters : ",up)
print("Lowercase characters : ",low)
print("Digits : ",digits)
print("Words : ",len_words)

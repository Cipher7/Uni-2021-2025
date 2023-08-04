n = int(input("Enter number of lines to print : "))

with open('file-p6.txt', 'r') as f:
    for line in (f.readlines()[:n]):
        print(line,end='')

word = input("Enter the word to count : ")
file = open('file-p6.txt', 'r')
data = file.read()
n = data.count(word)
print("Word count : ", n)

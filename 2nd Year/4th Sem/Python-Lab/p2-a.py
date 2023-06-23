# Program to find the sum of fibonacci series

def fibo(n):
    if n<=1:
        return n
    else:
        return fibo(n-1) + fibo(n-2)

n = int(input("Enter value of n: "))
if n<1:
    print("Number should be greater than 0")

else:
    for i in range(0,n):
        print(fibo(i))

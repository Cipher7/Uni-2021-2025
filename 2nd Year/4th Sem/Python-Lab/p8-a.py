class Palindrome:
    def __init__(self,data):
        self.data = data
        self.isPalindrome = False

    def data_palindrome(self):
        return self.data == self.data[::-1]

class StrPalindrome(Palindrome):
    pass

class IntPalindrome(Palindrome):
    def __init__(self, num):
        self.num = num
        self.isPalindrome = False

    def data_palindrome(self):
        temp = self.num
        rev = 0
        while temp != 0:
            d = temp % 10
            rev = (rev*10) + d
            temp = temp // 10

        return rev == self.num

string = input("Enter the input string : ")
str_obj = StrPalindrome(string)

if str_obj.data_palindrome():
    print("String entered is a palindrome")
else:
    print("String entered is not a palindrome")

number = int(input("Enter a number : "))
num_obj = IntPalindrome(number)

if num_obj.data_palindrome():
    print("Number entered is a palindrome")
else:
    print("Number entered is not a palindrome")

import re

def validate_roman(string):
    return bool(re.search(pattern r"^M{0,3}(CM|CD|D|C{0,3})(XC|XL|L|X{0,3})(IX|IV|V|I{0,3})$",string))

def roman_to_int(s):
    rom_dict = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
    total = 0
    prev_val = 0

    for x in reversed(s):
        cur_val = rom_dict[x]
        if cur_val >= prev_val:
            total += cur_val
        else:
            total -= cur_val
        prev_val = cur_val
    return total

rom = input("Enter roman number : ")
if validate_roman(rom):
    print(roman_to_int(rom))
else:
    print("Invalid roman number")

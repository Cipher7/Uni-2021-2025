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

print(roman_to_int("IV"))

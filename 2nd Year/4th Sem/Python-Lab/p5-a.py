import re

def isPhoneNumber(numstr):
    for i in range(len(numstr)):
        if i==3 or i==7:
            if numstr[i] != '-':
                return False
        else:
            if numstr[i].isdigit():
                continue
            else:
                return False
    return True

def isPhRegex(numstr):
    ph_pat = re.compile(r"\d{3}-\d{3}-\d{4}$")

    if ph_pat.match(numstr):
        return True
    return False

numstr = input("Enter a phone no. : ")

print(isPhoneNumber(numstr))
print(isPhRegex(numstr))

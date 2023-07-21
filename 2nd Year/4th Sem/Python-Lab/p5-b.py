import re

phnum_pat = re.compile(r'^\+\d[12]$')
email_pat = re.compile(r'^[a-z A-Z 0-9 . _]\@[a-z A-Z] \. [a-z A-Z 0-9]$')
matches_email = []
matches_phno = []
with open('file.txt','r') as f:
    for line in f:
        matches_email += email_pat.findall(line)
        matches_phno += phnum_pat.findall(line)

print(matches_email)
print(matches_phno)

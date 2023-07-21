import re

phnum_pat = re.compile(r'\+\d{12}$')
email_pat = re.compile(r'\S+\@\S+')
matches_email = []
matches_phno = []
with open('file.txt','r') as f:
    for line in f:
        matches_email.extend(email_pat.findall(line))
        matches_phno.extend(phnum_pat.findall(line))

print(matches_email)
print(matches_phno)

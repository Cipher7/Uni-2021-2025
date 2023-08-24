class Employee:
    def __init__(self,name,id,dept,salary):
        self.name = name
        self.id = id
        self.dept = dept
        self.salary = salary
    
    def updateSalary(self,percent):
        self.salary += (self.salary*percent/100)
    
    def output(self):
        print("Employee name : ", self.name)
        print("Employee ID :", self.id)
        print("Employee dept : ", self.dept)
        print("Employee salary : ", self.salary)

emp = []
n = int(input("Enter no. of employees : "))
if n<1:
    print("Invalid")
    exit()
for i in range(n):
    print("Employee %d : " % (i+1))
    name = input("Enter name : ")
    id = int(input("Enter ID : "))
    salary = int(input("Enter salary : "))
    dept = input("Enter dept : ")
    emp.append(Employee(name,id,dept,salary))

for i in range(n):
    emp[i].output()

dep = input("Enter department : ")
hike = int(input("Enter percent : "))

for i in range(n):
    if dep == emp[i].dept:
        emp[i].updateSalary(hike)

for i in range(n):
    emp[i].output()
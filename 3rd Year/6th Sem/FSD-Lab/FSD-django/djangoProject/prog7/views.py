from django.http import HttpResponse
from django.shortcuts import render

from prog7.models import Course, Student

# Create your views here.
def register(request):
    if request.method == "POST":
        sid = request.POST.get("sname")
        cid = request.POST.get("cname")
        student = Student.objects.get(id=sid)
        course = Course.objects.get(id=cid)
        res = student.enrolment.filter(id=cid)

        if res:
            return HttpResponse("<h1 style='color:red'>Student already enrolled</h1>")
        
        student.enrolment.add(course)
        return HttpResponse("<h1 style='color:#00FF00'>Student enrolled successfully</h1>")
    
    else:
        students = Student.objects.all()
        courses = Course.objects.all()

        return render(request,"enroll.html",{"students":students, "courses":courses})
    
def course_search(request):
        if request.method=="POST":
            cid=request.POST.get("cname")
            s=Student.objects.all()

            student_list=list()

            for student in s:
                if student.enrolment.filter(id=cid):
                    student_list.append(student)

            if len(student_list)==0:
                return HttpResponse("<h1 style='color:red'>No students enrolled</h1>")    
                
            return render(request,"selected_students.html",{"student_list":student_list})
            
        else:
            courses=Course.objects.all()
            return render(request,"course_search.html",{"courses":courses})
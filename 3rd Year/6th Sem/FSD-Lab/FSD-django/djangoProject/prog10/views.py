from django.shortcuts import render
from django.views.generic.detail import DetailView  
from django.views.generic.list import ListView
from .models import Student, Course


class StudentList(ListView):
    model = Student
    context_object_name = 'stud'
    template_name='student_list.html'

class StudentDetails(DetailView):
    model = Student
    context_object_name = 'stud'
    template_name='student_details.html'

class CourseDetails(DetailView):
    model = Course
    context_object_name = 'course'
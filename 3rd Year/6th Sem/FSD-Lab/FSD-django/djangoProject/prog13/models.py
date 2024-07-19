from django.db import models
from django import forms

class Course(models.Model):
    name = models.CharField(max_length=100)
    description = models.TextField()
    def __str__(self):
        return self.name

class Student(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField()
    course = models.ForeignKey(Course, on_delete=models.CASCADE)
    def __str__(self):
        return self.name

class StudentSearchForm(forms.Form):
    student_name = forms.CharField(label='Student Name', max_length=100)

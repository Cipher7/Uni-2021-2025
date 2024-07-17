from django.db import models
from django.forms import ModelForm

# Create your models here.

class Course(models.Model):
    id = models.AutoField(primary_key=True)
    course_code = models.CharField(max_length=14)
    course_name = models.CharField(max_length=70)
    course_credits = models.IntegerField()

class Student(models.Model):
    id = models.AutoField(primary_key=True)
    student_usn = models.CharField(max_length=10)
    student_name = models.CharField(max_length=80)
    student_sem = models.IntegerField()
    enrolment = models.ManyToManyField(Course)
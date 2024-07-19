from django.db import models

# Create your models here.

class Course(models.Model):
    id = models.AutoField(primary_key=True)
    course_code = models.CharField(max_length=14)
    course_name = models.CharField(max_length=70)
    course_credits = models.IntegerField()
    def __str__(self):
        return self.course_name

class Student(models.Model):
    id = models.AutoField(primary_key=True)
    student_usn = models.CharField(max_length=10)
    student_name = models.CharField(max_length=80)
    student_sem = models.IntegerField()
    enrolment = models.ManyToManyField(Course)
    def __str__(self):
        return self.student_name



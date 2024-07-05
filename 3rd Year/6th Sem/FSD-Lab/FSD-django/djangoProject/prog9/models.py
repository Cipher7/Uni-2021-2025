from django.db import models
from django.forms import ModelForm

# Create your models here.

class Student(models.Model):
    student_usn = models.CharField(max_length=10, unique=True, blank=False, null=False)
    student_name = models.CharField(max_length=80, blank=False, null=False)
    student_sem = models.IntegerField()

    def __str__(self):
        return self.student_name+" ("+self.student_usn+")"
    
class Project(models.Model):
    Selected_student = models.ForeignKey(Student, on_delete=models.CASCADE)
    Topic = models.CharField(max_length=200, blank=False, null=False)
    Languages_used = models.CharField(max_length=200, blank=False, null=False)
    Duration_in_days = models.IntegerField()

class ProjectReg(ModelForm):
    class Meta:
        model = Project
        fields = ["Selected_student", "Topic", "Languages_used", 'Duration_in_days']
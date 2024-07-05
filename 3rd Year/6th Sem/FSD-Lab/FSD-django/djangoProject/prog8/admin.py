from django.contrib import admin

from .models import Student, Course
# Register your models here.

@admin.register(Student)
class StudentAdmin(admin.ModelAdmin):
    list_display = ("student_name", "student_usn", "student_sem")
    ordering = ("-student_sem",)
    search_fields = ("student_name", 'student_usn')
admin.site.register(Course)
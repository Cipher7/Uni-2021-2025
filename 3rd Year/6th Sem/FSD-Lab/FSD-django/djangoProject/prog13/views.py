from django.shortcuts import render
from django.shortcuts import render
from django.http import JsonResponse
from .models import Student, StudentSearchForm

def search_form(request):
    form = StudentSearchForm()
    return render(request, 'search_form.html', {'form': form})

def search_courses(request):
    if request.method == 'GET' and 'student_name' in request.GET:
        student_name = request.GET['student_name']
        student = Student.objects.filter(name__icontains=student_name).first()
        
        if student:
            courses = student.courses.all()
            course_list = [{'name': course.name, 'description': course.description} for course in courses]
            return JsonResponse({'success': True, 'courses': course_list})
        else:
            return JsonResponse({'success': False, 'error': 'Student not found.'})
    
    return JsonResponse({'success': False, 'error': 'Invalid request.'})
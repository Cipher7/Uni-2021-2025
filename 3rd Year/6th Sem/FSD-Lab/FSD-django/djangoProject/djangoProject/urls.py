"""
URL configuration for djangoProject project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""

from django.contrib import admin
from django.urls import path

from prog3.views import displaydate
from prog4.views import displaydateoffset
from prog5.views import show_lists
from prog6.views import show_home_page, show_aboutus_page, show_contactus_page
from prog7.views import register, course_search
from prog9.views import addProject
from prog10.views import StudentList, StudentDetails
from prog11.views import generate_csv_response, generate_pdf_response
from prog12.views import register_student, student_list

urlpatterns = [
    path('admin/', admin.site.urls),
    path('prog3/', displaydate),
    path('prog4/',displaydateoffset),
    path('prog5/',show_lists),
    path('prog6/home/', show_home_page),
    path('prog6/aboutus', show_aboutus_page),
    path('prog6/contactus', show_contactus_page),
    path('prog7/register', register),
    path('prog7/coursesearch', course_search),
    path('prog9/register', addProject),
    path('prog10/list/', StudentList.as_view()),
    path('prog10/details/<int:pk>/', StudentDetails.as_view(),name="details"),
    path('prog11/generatecsv', generate_csv_response),
    path('prog11/generatepdf',generate_pdf_response),
    path('prog12/registerajax', register_student, name="student_registration"),
    path('prog12/studentsajax', student_list, name="student_list")
]
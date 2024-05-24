from django.shortcuts import render
from django.http import HttpResponse

def show_home_page(request):
    return HttpResponse(render(request, "home.html"))
def show_aboutus_page(request):
    return HttpResponse(render(request, "aboutus.html"))
def show_contactus_page(request):
    return HttpResponse(render(request, "contactus.html"))
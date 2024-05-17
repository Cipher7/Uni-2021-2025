import datetime
from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.
def displaydate(request):
    a=datetime.datetime.now()
    r="<h2 style='color:red'><center>Current date and time is %s<center></h2>"%(a)
    return HttpResponse(r)
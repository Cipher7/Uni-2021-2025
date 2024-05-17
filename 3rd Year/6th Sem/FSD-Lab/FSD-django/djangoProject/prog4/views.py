import datetime
from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.
def displaydateoffset(request):
    a=datetime.datetime.now()
    before=a-datetime.timedelta(hours=4)
    after=a+datetime.timedelta(hours=4)
    r1="<h2 style='color:red'><center>Current date and time is %s <center></h2>"%(a)
    r2="<h2 style='color:red'><center>Date and time 4 hours before is %s <center></h2>"%(before)
    r3="<h2 style='color:red'><center>Date and time 4 hours after is %s <center></h2>"%(after)
    return HttpResponse(r1+r2+r3)
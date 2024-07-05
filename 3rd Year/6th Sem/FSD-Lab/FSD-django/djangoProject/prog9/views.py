from django.http import HttpResponse
from django.shortcuts import render

from prog9.models import ProjectReg

# Create your views here.
def addProject(request):
    if request.method == "POST":
        form = ProjectReg(request.POST)

        if form.is_valid():
            form.save()
            return HttpResponse("<h1 style='color:green'>Project details saved successfully</h1>")
        
        else:
            return HttpResponse("<h1 style='color:red'>Project details could not be saved</h1>")
        
    else:
        form = ProjectReg()
        return render(request, "add_project.html", {"openAddProjDetsForm":form})
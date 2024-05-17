from django.shortcuts import render
from django.template import loader
from django.http import HttpResponse

# Create your views here.
def show_lists(request):
    templates=loader.get_template("mytemplate.html")
    context={"fruits":["Apple", "Banana", "Mango", "Watermelon"],
             "students":["Vis", "Kanishk", "Prerana", "Thakur", "Laasya", "Maitri"]
             }
    return HttpResponse(templates.render(context, request))
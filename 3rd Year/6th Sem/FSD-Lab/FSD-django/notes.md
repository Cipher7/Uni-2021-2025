# Notes

## Create python virtual environment
```bash
python3 -m venv venv
```

## activate the python virtual environment
```bash
source venv/bin/activate
```

## Install django
```
pip install django
```

## Create a project
```bash
django-admin --version
django-admin startproject djangoProject
```
## Run the server
```python
python3 manage.py runserver 
```

## Create an application
```python
python3 manage.py startapp prog1
```

## Register a superuser
```python
python3 manage.py createsuperuser
```

## Apply migrations
```python
python3 manage.py makemigrations
python3 manage.py migrate
```
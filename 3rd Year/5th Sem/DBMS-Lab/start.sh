#!/bin/bash

# --------------------- NOTES-------------------------------------------------------------------
# We created a database called 'college4' with the table called 'student'
# Commands used --> 
# show databases;
# create database college4;
# show databases;
# create table student(usn int primary key, name varchar(40), dob date, marks int, gender char);
# show tables;
# insert into student values(01, "mark", "2000-11-7", 69, 'M');
# desc student;
# select * from student;
# -------------------------------------------------------------------------------------------------

# Start lampp server
sudo /opt/lampp/manager-linux-x64.run &

read -rsn1 key
# Start the mysql server
sudo /opt/lampp/bin/mysql -u root

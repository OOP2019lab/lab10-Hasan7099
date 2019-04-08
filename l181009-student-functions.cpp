#include <iostream>
#include "Student.h"

using namespace std;

student::student()
{
	username = "";
	roll_no = "";
	name = "";
	courses = new course *[max_courses];
}

student::student(string username, string name, string id)
{
	courses = new course *[max_courses];
	this->username = username;
	this->name = name;
	this->roll_no = id;
}

student::student(student * s)
{
	this->course_count = s->course_count;
	this->max_courses = s->max_courses;
	this->name = s->name;
	this->username = s->username;
	this->roll_no = s->roll_no;
	for (int i = 0; i < course_count; i++)
	{
		this->courses[i] = s->courses[i];
	}
}

void student::add_course(course * c)
{
	if (this->course_count < this->max_courses)
	{
		courses[course_count] = new course(c);
		course_count++;
	}
}
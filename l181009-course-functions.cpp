#include <iostream>
#include "Course.h"

using namespace std;

course::course()
{
	course_name = "";
	course_id = "";
	students = new student *[max_std];
}

course::course(string name, string id)
{
	course_name = name;
	course_id = id;
	students = new student *[max_std];
}

course::course(course *c)
{
	this->std_count = c->std_count;
	this->course_id = c->course_id;
	this->max_std = c->max_std;
	this->course_name = c->course_name;
	for (int i = 0; i < std_count; i++)
	{
		this->students[i] = c->students[i];
	}
}

void course::add_student(student * s)
{
	if (std_count < this->max_std)
	{
		this->students[std_count] = s;
		this->std_count++;
	}
}
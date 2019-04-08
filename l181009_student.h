#pragma once

#include <string>
class course;

using namespace std;

class student
{
	int max_courses = 2;
	int course_count = 0;
	string username;
	string name;
	string roll_no;
	course ** courses;

public:
	student();
	student(string username, string name, string id);
	student(student*s);
	void add_course(course * c);
};
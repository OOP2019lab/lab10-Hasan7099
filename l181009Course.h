#pragma once
#include <string>
class student;

using namespace std;

class course
{
	int max_std = 4;				//max number of students
	int std_count = 0;
	string course_name;
	string course_id;
	student ** students;
	void add_student(student * s);

public:
	friend class student;
	course();
	course(string name, string id);
	course(course *c);

};
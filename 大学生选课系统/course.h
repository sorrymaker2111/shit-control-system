#pragma once
//课程类
#include <iostream>
using namespace std;

class Course
{

public :
	string CourseName; //课程名称
	int CourseTime;//课时
	string CourseTeacher; //授课老师
	int CourseScore; //课时学分

public:
	virtual void Show_CourseInfor() = 0; //显示课程信息 
};

#include <C++.h>

CPP::CPP() //构造函数
{
	this->CourseName = "C++程序设计";
	this->CourseScore = 3;
	this->CourseTeacher = "翁恺";
	this->CourseTime = 21;
}

//显示课程信息
void CPP::Show_CourseInfor()
{
	cout << "课程名称： " << this->CourseName << endl;
	cout << "课程学分: " << this->CourseScore << endl;
	cout << "课程教师: " << this->CourseTeacher << endl;
	cout << "课程学时: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}
#include <soccer.h>

Soccer::Soccer() //构造函数
{
	this->CourseName = "足球课";
	this->CourseScore = 1;
	this->CourseTeacher = "韦世豪";
	this->CourseTime = 10;
}

//显示课程信息
void Soccer::Show_CourseInfor()
{
	cout << "课程名称： " << this->CourseName << endl;
	cout << "课程学分: " << this->CourseScore << endl;
	cout << "课程教师: " << this->CourseTeacher << endl;
	cout << "课程学时: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}
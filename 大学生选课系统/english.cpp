#include <english.h>

English::English() //构造函数
{
	this->CourseName = "英语";
	this->CourseScore = 2;
	this->CourseTeacher = "川普";
	this->CourseTime = 15;
}

//显示课程信息
void English::Show_CourseInfor()
{
	cout << "课程名称： " << this->CourseName << endl;
	cout << "课程学分: " << this->CourseScore << endl;
	cout << "课程教师: " << this->CourseTeacher << endl;
	cout << "课程学时: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}
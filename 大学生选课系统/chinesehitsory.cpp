#include <chinesehistory.h>

ChineseHistory::ChineseHistory() //构造函数
{
	this->CourseName = "中国史";
	this->CourseScore = 2;
	this->CourseTeacher = "张三";
	this->CourseTime = 20;
}

//显示课程信息
void ChineseHistory::Show_CourseInfor()
{
	cout << "课程名称： " << this->CourseName << endl;
	cout << "课程学分: " << this->CourseScore << endl;
	cout << "课程教师: " << this->CourseTeacher << endl;
	cout << "课程学时: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}
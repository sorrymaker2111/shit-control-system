#include <advancedmath.h>

AdvancedMath::AdvancedMath() //构造函数
{
	this->CourseName = "高数";
	this->CourseScore = 3;
	this->CourseTeacher = "刘秀";
	this->CourseTime = 18;
}


//显示课程信息
void AdvancedMath::Show_CourseInfor()
{
	cout << "课程名称： " << this->CourseName << endl;
	cout << "课程学分: " << this->CourseScore << endl;
	cout << "课程教师: " << this->CourseTeacher << endl;
	cout << "课程学时: " << this->CourseTime << endl;
	cout << "-------------------------------" << endl;
}
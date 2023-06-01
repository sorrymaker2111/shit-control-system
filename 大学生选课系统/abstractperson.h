#pragma once
//抽象人类
#include <iostream>
#include <course.h>
using namespace std;

class Abstract
{
public:
	string Name; //姓名
	int Id; //编号
	Course** p; //维护课程数组的指针
	int CourseNumber; //数组课程长度

public :
	virtual void Show_Infor() = 0; //显示个人信息
	virtual void Change_Infor() = 0; //修改个人信息
};

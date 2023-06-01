#pragma once
//老师类
#include <iostream>
#include <abstractperson.h>
#include <string>
//课程头文件
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>

using namespace std;

class Teacher :public Abstract
{
public:
	Teacher();
	~Teacher();
public:
	string Duty_ForCourse; //负责的课程
public:
	void Show_Infor(); //显示个人信息
	void Change_Infor(); //修改个人信息
	void Show_Menu(); //显示菜单
	bool Logout(); //退出登录
};


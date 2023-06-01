#pragma once
//学生模块类
#include <iostream>
#include <abstractperson.h>
#include <control.h>
//课程头文件
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>
#include <course.h>

using namespace std;

class Student: public Abstract
{
public:
	Control con2;
public:
	Student(); //构造函数
	~Student(); //析构函数
public :
	void Search_Course(); //查找课程
	void Show_Infor(); //显示个人信息
    void Change_Infor(); //修改个人信息
	void Select_Course(); //选择课程
	void Show_SelectedCourse(); //显示已选课程
	void Show_Menu(); //显示菜单
	bool Logout(); //退出登录
};

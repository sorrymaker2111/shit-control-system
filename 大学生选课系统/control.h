#pragma once
//管理员类
#include <iostream>
#include <string>
#include<abstractperson.h>

//课程头文件
#include <chinesehistory.h>
#include <advancedmath.h>
#include <C++.h>
#include <soccer.h>
#include <english.h>
using namespace std;

class Control
{
public :
	Control(); //构造函数
	~Control(); //析构函数
public:
	string Name; //姓名
	int Id; //编号
	Course** p; //维护课程数组的指针
	int CourseNumber; //课程数量


public:
	void Add_Course(); //增加课程
	void Delete_Course(); //删除课程
	void Show_Course(); //显示课程
	void Show_Menu(); //显示菜单
	bool Logout(); //退出登录
	int Is_Course(string name); //判断是否有该课程


};


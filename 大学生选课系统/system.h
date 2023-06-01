#pragma once
//系统类
#include<iostream>

#include <control.h>
#include <student.h>
#include <teacher.h>

#include <account.h>
#include <studentaccount.h>
#include <teacheraccount.h>
#include <controlaccount.h>
using namespace std;


class System
{
public:
	System();
	~System();
public:
	Control con;
	Teacher tea;
	Student stu;


	Account** p; //维护存放账号的数组
	int AccountNumber; //账号数目

public:
	void Show_LoginMenu(); //显示登录界面
	void Creat_Account(); //注册账号
	void Login_Account(); //登录账号
	void Exit_System(); //退出系统
	int Is_Account(string Users, string Password, int Id); //判断登录账号信息
	int Accout_Type(int flag); //判断账号类型
	void Show_Account(); //显示已有账号


};

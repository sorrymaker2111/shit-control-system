#pragma once
//账号类
#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account();
public:
	string Users; //用户名
	string Password; //密码
	int Id; //编号
	int Flag;//账号标识

public:
	virtual void Show_Account() = 0; //显示账号信息
	

};


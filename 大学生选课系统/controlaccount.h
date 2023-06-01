#pragma once
//管理员账号
#include <iostream>
#include <account.h>
using namespace std;

class ControlAccount : public Account
{

public:
	ControlAccount();
	void Show_Account(); //显示账号信息
};


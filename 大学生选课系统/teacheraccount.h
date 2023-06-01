#pragma once
#pragma once
//老师账号
#include <iostream>
#include <account.h>
using namespace std;

class TeacherAccount : public Account
{

public:
	TeacherAccount();
	void Show_Account(); //显示账号信息
};

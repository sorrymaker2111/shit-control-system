#pragma once
//学生账号
#include <iostream>
#include <account.h>
using namespace std;

class StudentAccount : public Account
{
public:
	StudentAccount();
    void Show_Account(); //显示账号信息
};

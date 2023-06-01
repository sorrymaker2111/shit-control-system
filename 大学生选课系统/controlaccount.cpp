#include <controlaccount.h>

ControlAccount::ControlAccount()
{
	this->Users = "";
	this->Password = "";
	this->Id = 0;
	this->Flag = 3;
}

void ControlAccount::Show_Account() //显示账号信息
{
	cout << "用户名: " << this->Users << endl;
	cout << "密码: " << this->Password << endl;
	cout << "编号: " << this->Id << endl;
}
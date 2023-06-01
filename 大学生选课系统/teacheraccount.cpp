#include <teacheraccount.h>

TeacherAccount::TeacherAccount()
{
	this->Users = "";
	this->Password = "";
	this->Id = 0;
	this->Flag = 2;
}

void TeacherAccount::Show_Account() //显示账号信息
{
	cout << "用户名: " << this->Users << endl;
	cout << "密码: " << this->Password << endl;
	cout << "编号: " << this->Id << endl;
}
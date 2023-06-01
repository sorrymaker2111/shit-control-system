//#include <iostream>
//using namespace std;
//#include <login.h>
//
//Login::Login() //构造函数
//{
//	this->Account = 0;
//	this->Password = "";
//	this->Id = 0;
//	this->key = 0;
//}
//
//void Login::Show_LoginMenu() //显示登录界面
//{
//
//	bool flag = false;
//	while (true)
//	{
//		cout << "----------------------------------" << endl;
//		cout << "--------- 大学生选课系统 ----------" << endl;
//		cout << endl;
//		cout << endl;
//		cout << "请选择:" << endl;
//		cout << "1.登录账号" << endl;
//		cout << "2.注册账号" << endl;
//		cout << "3.退出系统" << endl;
//
//		int key = 0;
//		cin >> key;
//
//		switch (key)
//		{
//		case 1:
//			if (this->Login_Account())
//			{
//				flag = true;
//			}
//			break;
//		case 2:
//			this->Creat_Account();
//			break;
//		case 3:
//			this->Exit_System();
//			break;
//		}
//
//		if (flag) //登录成功
//		{
//			break;
//		}
//	}
//	
//
//
//}
//
//void Login::Creat_Account() //注册账号
//{
//	cout << "-------------管理员账号注册---------------";
//
//	cout << "请输入账号:  " << endl;
//	int Account = 0;
//	cin >> Account;
//	this->Account = Account;
//
//	cout << "请输入密码:  " << endl;
//	string Password = "";
//	cin >> Password;
//	this->Password = Password;
//
//	cout << "管理员账号注册成功！" << endl;
//
//
//	//返回界面
//	system("pause");
//	system("cls");
//
//}
//bool Login::Login_Account() //登录账号
//{
//	cout << "请选择要登录的账号类型: " << endl;
//	cout << "1.学生" << endl;
//	cout << "2.教师" << endl;
//	cout << "3.管理员" << endl;
//
//	int key = 0;
//	cin >> key;
//
//	int Account = 0;
//	string Password = "";
//	int Id = 0;
//	bool flag = false; //判断是否登录成功
//
//
//	cout << "请输入账号（要求全为数字）: " << endl;
//	cin >> Account;
//	cout << "请输入密码（可输入数字和字母以及符号等): " << endl;
//	cin >> Password;
//	cout << "请输入编号 (要求全为数字）: " << endl;
//	cin >> Id;
//
//	switch (key)
//	{
//	case 1:
//		//判断信息是否相符
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "学生账号登录成功!" << endl;
//			this->key = 1;
//		}
//		else {
//			cout << "登录失败,信息有误！" << endl;
//
//			system("pause");
//			system("cls");
//
//		}
//			
//		break;
//	case 2:
//		//判断信息是否相符
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "教师账号登录成功!" << endl;
//			this->key = 2;
//		}
//		else {
//			cout << "登录失败,信息有误！" << endl;
//
//			system("pause");
//			system("cls");
//
//		}	
//		break;
//	case 3:
//		//判断信息是否相符
//		if (this->Is_Same(Account, Password, Id))
//		{
//			cout << "管理员账号登录成功!" << endl;
//			this->key = 3;
//		}
//		else {
//			cout << "登录失败,信息有误！" << endl;
//
//			system("pause");
//			system("cls");
//
//		}
//		break;
//	}
//	
//	if (this->key == 1 || this->key == 2 || this->key == 3)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Login::Input_Account() //输入
//{
//	cout << "请输入账号（要求全为数字）: " << endl;
//	cin >> this->Account;
//	cout << "请输入密码（可输入数字和字母以及符号等): " << endl;
//	cin >> this->Password;
//	cout << "请输入编号 (要求全为数字）: " << endl;
//	cin >> this->Id;
//
//}
//
////判断登录账号信息
//bool Login::Is_Same(int Account, string Password, int Id)
//{
//	if (Account == this->Account && Password == this->Password &&
//		Id == this->Id)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Login::Exit_System() //退出系统
//{
//	cout << "确认退出系统？" << endl;
//	cout << "1.确认退出" << endl;
//	cout << "2.我再想想" << endl;
//
//	int key = 0;
//	cin >> key;
//
//	if (key == 1)
//	{
//		exit(0);
//	}
//	else if (key == 2)
//	{
//		system("pause");
//		system("cls");
//	}
//
//
//}
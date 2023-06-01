#include <system.h>

System::System()
{
	this->p = NULL;
	this->AccountNumber = 0;
}

System::~System()
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->AccountNumber; i++)
		{
			if (this->p[i] != NULL)
			{
				delete p[i];
				p[i] = NULL;
			}
		}

		delete[]p;
		p = NULL;
	}
}

void System::Show_LoginMenu() //显示登录界面
{
	while (true)
	{
		cout << "----------------------------------" << endl;
		cout << "--------- 大学生选课系统 ----------" << endl;
		cout << endl;
		cout << endl;
		cout << "请选择:" << endl;
		cout << "1.登录账号" << endl;
		cout << "2.注册账号" << endl;
		cout << "3.显示已有账号" << endl;
		cout << "4.退出系统" << endl;

		int key = 0;
		cin >> key;

		system("cls");

		switch (key)
		{
		case 1:
			this->Login_Account();
			break;
		case 2:
			this->Creat_Account();
			break;
		case 3:
			this->Show_Account();
			break;
		case 4:
			this->Exit_System();
			break;
		}
               
	}
}

void System::Creat_Account() //注册账号
{
	cout << "-------------帐号注册---------------" << endl;
	cout << "请选择注册账号的类型: " << endl;
	cout << "1.学生账号" << endl;
	cout << "2.老师账号" << endl;
	cout << "3.管理员账号" << endl;

	//开辟数组空间
Account** newspace = new Account* [(this->AccountNumber + 1) * sizeof(Account*)];

    //拷贝已有账号
if (this->p != NULL && this->AccountNumber != 0)
{
	for (int i = 0; i < this->AccountNumber; i++)
	{
		newspace[i] = p[i];
	}
  }
  
   //添加新账号

	int key = 0;
	string Users = "";
	string Password = "";
	int Id = 0;

	cin >> key;

	switch (key)
	{
	case 1:
	{
		newspace[this->AccountNumber] = new StudentAccount;
		cout << "请输入用户名: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "请输入密码: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "请输入编号: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//更新数据
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "学生账号注册成功!" << endl;
		break;
	}
		
	case 2:
	{
		newspace[this->AccountNumber] = new TeacherAccount;
		cout << "请输入用户名: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "请输入密码: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "请输入编号: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//更新数据
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "老师账号注册成功!" << endl;
		break;
	}
	case 3:
	{
		newspace[this->AccountNumber] = new ControlAccount;
		cout << "请输入用户名: " << endl;
		cin >> Users;
		newspace[this->AccountNumber]->Users = Users;

		cout << "请输入密码: " << endl;
		cin >> Password;
		newspace[this->AccountNumber]->Password = Password;


		cout << "请输入编号: " << endl;
		cin >> Id;
		newspace[this->AccountNumber]->Id = Id;

		//更新数据
		this->p = newspace;
		newspace = NULL;
		this->AccountNumber++;

		cout << "管理员账号注册成功!" << endl;
		break;
	}

	}


	


	//返回界面
	system("pause");
	system("cls");
}

void System::Login_Account() //登录账号
{

	string Users = "";
	string Password = "";
	int Id = 0;

	cout << "请输入用户名: " << endl;
	cin >> Users;
	cout << "请输入密码： " << endl;
	cin >> Password;
	cout << "请输入编号: " << endl;
	cin >> Id;

	//判断有没有该账号
	int flag = this->Is_Account(Users, Password, Id);

	if (flag != -1)
	{
		//判断账号类型
		switch (this->Accout_Type(flag))
		{
		case 1:
			cout << "学生账号登录成功!" << endl;
			this->stu.con2 = this->con;
			system("pause");
			system("cls");
			this->stu.Show_Menu();//进入学生菜单
			break;
		case 2:
			cout << "老师账号登录成功!" << endl;
			system("pause");
			system("cls");
			this->tea.Show_Menu(); //进入老师菜单
			break;
		case 3:
			cout << "管理员账号登录成功!" << endl;
			system("pause");
			system("cls");
			this->con.Show_Menu(); //进入管理员菜单
			break;
		}
	}
	else {
		cout << "登录失败，账号密码错误！" << endl;
	}

	system("pause");
	system("cls");
	} //登录账号

void System::Exit_System() //退出系统
{
	cout << "确认退出系统？" << endl;
	cout << "1.确认退出" << endl;
	cout << "2.我再想想" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		exit(0);
	}
	else if (key == 2)
	{
		system("pause");
		system("cls");
	}

}

//判断登录账号信息
int System::Is_Account(string Users, string Password, int Id) 
{
	int temp = -1; //账号数组下表

	for (int i = 0; i < this->AccountNumber; i++)
	{
		if (this->p[i]->Users == Users && this->p[i]->Password == Password
			&& this->p[i]->Id == Id)
		{
			temp = i;
			break;
		}
	}

	return temp;
}

int System::Accout_Type(int flag)//判断该账号类型
{
	int temp = 0;

	switch (this->p[flag]->Flag)
	{
	case 1:
		temp = 1;
		break;
	case 2:
		temp = 2;
		break;
	case 3:
		temp = 3;
		break;	
	}
	return temp;
}

void System::Show_Account() //显示已有账号
{
	if (this->p != NULL && this->AccountNumber != 0)
	{
		for (int i = 0; i < this->AccountNumber; i++)
		{
			this->p[i]->Show_Account();
		}
	}
	else {
		cout << "还没有任何账号!" << endl;
	}
	

	system("pause");
	system("cls");
}



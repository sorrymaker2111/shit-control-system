#include <teacher.h>

Teacher::Teacher()
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
	this->Duty_ForCourse = "";
}
Teacher::~Teacher()
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->CourseNumber; i++)
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

void Teacher::Show_Infor()//显示个人信息
{
	cout << "教师姓名: " << this->Name << endl;
	cout << "编号：" << this->Id << endl;
	cout << "负责课程: " << this->Duty_ForCourse << endl;

	system("pause");
	system("cls");
}
void Teacher::Change_Infor() //修改个人信息
{
	string Name = "";
	int Id = 0;
	string CourseName = "";

	cout << "请输入要修改的信息:" << endl;

	cout << "教师姓名: " << endl;
	cin >> Name;
	this->Name = Name;

	cout << "编号: " << endl;
	cin >> Id;
	this->Id = Id;

	cout << "负责的课程: " << endl;
	cin >> CourseName;
	this->Duty_ForCourse = CourseName;

	cout << "修改成功!" << endl;

	system("pause");
	system("cls");
}
void Teacher::Show_Menu() //显示菜单
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- 教师页面 -----------" << endl;
		cout << "请选择功能： " << endl;
		cout << "1.显示个人信息" << endl;
		cout << "2.修改个人信息" << endl;
		cout << "3.退出登录" << endl;

		int key = 0;
		cin >> key;

		switch (key)
		{
		case 1:
			this->Show_Infor();
			break;
		case 2:
			this->Change_Infor();
			break;
		case 3:
			if (this->Logout())
			{
				flag = true;
			}
			break;

		}

		//跳出循环
		if (flag)
		{
			
			break;
		}
	}

	system("pause");
	system("cls");

	
}

bool Teacher::Logout() //退出登录
{
	cout << "确认退出登录？" << endl;
	cout << "1.确认" << endl;
	cout << "2.我再想想" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		return true;
	}
	else {
		system("pause");
		system("cls");
		return false;
	}
}
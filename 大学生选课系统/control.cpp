#include <control.h>

Control::Control() //构造函数
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
}

Control::~Control()//析构函数
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

void Control::Show_Menu() //显示菜单
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- 管理者页面 -----------" << endl;
		cout << "请选择功能： " << endl;
		cout << "1.增加课程" << endl;
		cout << "2.删除课程" << endl;
		cout << "3.显示课程" << endl;
		cout << "4.退出登录" << endl;

		int key = 0;
		cin >> key;

		switch (key)
		{
		case 1:
			this->Add_Course();
			break;
		case 2:
			this->Delete_Course();
			break;
		case 3:
			this->Show_Course();
			break;
		case 4:
			if (this->Logout())
			{
				flag = true;
			}
			break;
		}

		if (flag)
		{
			
			break;
		}
	}

	system("pause");
	system("cls");
}


void Control::Show_Course() //显示课程
{
	if (this->p != NULL)
	{
		for (int i = 0; i < this->CourseNumber; i++)
		{
			this->p[i]->Show_CourseInfor();
		}
	}
	else {
		cout << "还没有课程！" << endl;
	}
	

	system("pause");
	system("cls");
}


bool  Control::Logout() //退出登录
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


void Control::Add_Course() //增加课程
{
	cout << "要增加几门课程？" << endl;
	int number = 0;
	cin >> number;

	//申请新的数组内存
 Course** newspace = new Course * [(this->CourseNumber + number) * sizeof(Course*)];

   //复制原来的课程到新数组里
  if (this->p != NULL)
 {
	 for (int i = 0; i < this->CourseNumber; i++)
	 {
		 newspace[i] = this->p[i];
	 }
   }
 

   //添加新的课程到数组里
 for (int i = this->CourseNumber; i < this->CourseNumber + number; i++)
 {
	 cout << "请选择要增加的第" << i - this->CourseNumber + 1 << "门课程: " << endl;
	 cout << "1.足球" << endl;
	 cout << "2.英语" << endl;
	 cout << "3.高数" << endl;
	 cout << "4.中国史" << endl;
	 cout << "5.C++语言程序设计" << endl;

	 int key = 0;
	 cin >> key;

	 switch (key)
	 {
	 case 1:
		 newspace[i] = new Soccer;
		 break;
	 case 2:
		 newspace[i] = new English;
		 break;
	 case 3:
		 newspace[i] = new AdvancedMath;
		 break;
	 case 4:
		 newspace[i] = new ChineseHistory;
		 break;
	 case 5:
		 newspace[i] = new CPP;
		 break;
	 }
 }

 //释放原有数组
 delete[]this->p;

 //更新数据
 this->p = newspace;
 newspace = NULL;
 this->CourseNumber = this->CourseNumber + number;

 cout << "成功添加" << number << "门课程！" << endl;

 system("pause");
 system("cls");
}

void Control::Delete_Course() //删除课程
{
	cout << "请输入要删除的课程" << endl;
	string CourseName = "";
	cin >> CourseName;

	//判断是否有这个课程
	bool flag = false;
	int number = 0; //记录下标

	for (int i = 0; i < this->CourseNumber; i++)
	{
		if (this->p[i]->CourseName == CourseName)
		{
			flag = true;
			number = i;
			break;
		}
	}

	if (flag) //有这个课程
	{
		//覆盖删除
		for (int i = number; i < this->CourseNumber; i++)
		{
			if (i + 1 < this->CourseNumber)
			{
				this->p[i] = this->p[i + 1];
			}
			
		}

		cout << "删除课程成功!" << endl;

		//更新数据
		this->CourseNumber = this->CourseNumber - 1;
	}
	else {
		cout << "删除失败！没有找到此课程!" << endl;
	}

	system("pause");
	system("cls");
}

int Control::Is_Course(string name) //判断是否有该课程
{
	int number = -1; //记录下标

	for (int i = 0; i < this->CourseNumber; i++)
	{
		if (this->p[i]->CourseName == name)
		{
			number = i;
			break;
		}
	}

	return number;
}


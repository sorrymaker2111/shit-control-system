#include <student.h>

Student::Student()//构造函数
{
	this->Name = "";
	this->Id = 0;
	this->p = NULL;
	this->CourseNumber = 0;
}

Student::~Student() //析构函数
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


void Student::Show_Menu() //显示菜单
{
	bool flag = false;
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "---------- 学生页面 -----------" << endl;
		cout << "请选择功能： " << endl;
		cout << "1.显示个人信息" << endl;
		cout << "2.修改个人信息" << endl;
		cout << "3.查找课程" << endl;
		cout << "4.选择课程" << endl;
		cout << "5.显示已选课程" << endl;
		cout << "6.退出登录" << endl;

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
			this->Search_Course();
			break;
		case 4:
			this->Select_Course();
			break;
		case 5:
			this->Show_SelectedCourse();
			break;
		case 6:
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

bool Student::Logout() //退出登录
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

void Student::Show_SelectedCourse() //显示已选课程
{
	if (this->p != NULL && this->CourseNumber !=0)
	{
		for (int i = 0; i < this->CourseNumber; i++)
		{
			this->p[i]->Show_CourseInfor();
		}
	}
	else {
		cout << "还没有选择课程！" << endl;
	}
	

	system("pause");
	system("cls");
}

void Student::Search_Course() //查找课程
{
	cout << "请输入课程名称: " << endl;
	string CourseName = "";
	cin >> CourseName;

	bool flag = false;
	int number = 0;

	for (int i = 0; i < this->con2.CourseNumber; i++)
	{
		if (con2.p[i]->CourseName == CourseName)
		{
			flag = true;
			number = i;
			break;
		}
	}

	if (flag)
	{
		cout << "成功查找到该课程！该课程信息为: " << endl;
		con2.p[number]->Show_CourseInfor();
	}
	else {
		cout << "查找失败！没有此课程!" << endl;
	}


	system("pause");
	system("cls");

}
void Student::Show_Infor() //显示个人信息
{
	cout << "学生姓名: " << this->Name << endl;
	cout << "编号：" << this->Id << endl;

	system("pause");
	system("cls");
}
void Student::Change_Infor() //修改个人信息
{
	string Name = "";
	int Id = 0;

	cout << "请输入要修改的信息:" << endl;

	cout << "学生姓名: " << endl;
	cin >> Name;
	this->Name = Name;

	cout << "编号: " << endl;
	cin >> Id;
	this->Id = Id;

	cout << "修改成功!" << endl;

	system("pause");
	system("cls");
}
void Student::Select_Course() //选择课程
{
	//显示可选课程
	if (this->con2.p != NULL)
	{
		cout << "可选课程如下: " << endl;
		this->con2.Show_Course();
	}

	//是否选择课程
	cout << "是否选择课程?" << endl;
	cout << "1.是" << endl;
	cout << "2.否" << endl;

	int key = 0;
	cin >> key;

	if (key == 1)
	{
		cout << "请输入选择的课程数目: " << endl;
		int number = 0;
		cin >> number;


		Course** newspace = new Course* [number * sizeof(Course*)];

		if (this->p != NULL)
		{
			for (int i = 0; i < this->CourseNumber; i++)
			{
				newspace[i] = this->p[i];
			}
			
		}

for (int i = this->CourseNumber; i < this->CourseNumber + number; i++)
		{

cout << "请输入第" << i - this->CourseNumber + 1 << "门课程的名称:" << endl;
			string name = "";
			cin >> name;
			
			int temp = this->con2.Is_Course(name);
			if (temp != -1)
			{
				newspace[i] = this->con2.p[temp];

			}

			
		}
   delete[]this->p;
   this->CourseNumber = this->CourseNumber + number;
   this->p = newspace;
	}

	system("pause");
	system("cls");

}

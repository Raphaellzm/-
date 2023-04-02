#include<iostream>
using namespace std;
#include"workerManager.h"
//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"


int main()
{
	//测试代码
	/*Worker * worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;*/

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch(choice)
		{
		case 0:
			wm.ExitSystem();		//0.退出管理程序
			break;
		case 1:	
			wm.Add_Emp();			 //1.增加职工信息 
			break;
		case 2:	
			wm.Show_Emp();					//2.显示职工信息
			break;
		case 3:						//3.删除离职职工
			wm.Del_Emp();
			break;
		case 4:	
			wm.Mod_Emp();//4.修改职工信息
			break;
		case 5:						//5.查找职工信息
			wm.Find_Emp();
			break;
		case 6:	
			wm.Sort_Emp();//6.按照编号排序
			break;
		case 7:						//7.清空所有文档
			wm.Clean_File();
			break;
		default:
			system("cls");  //清屏
			break;
		}
	}

	system("pause");
	return 0;
}
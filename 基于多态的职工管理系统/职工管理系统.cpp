#include<iostream>
using namespace std;
#include"workerManager.h"
//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"


int main()
{
	//���Դ���
	/*Worker * worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;*/

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch(choice)
		{
		case 0:
			wm.ExitSystem();		//0.�˳��������
			break;
		case 1:	
			wm.Add_Emp();			 //1.����ְ����Ϣ 
			break;
		case 2:	
			wm.Show_Emp();					//2.��ʾְ����Ϣ
			break;
		case 3:						//3.ɾ����ְְ��
			wm.Del_Emp();
			break;
		case 4:	
			wm.Mod_Emp();//4.�޸�ְ����Ϣ
			break;
		case 5:						//5.����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6:	
			wm.Sort_Emp();//6.���ձ������
			break;
		case 7:						//7.��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");  //����
			break;
		}
	}

	system("pause");
	return 0;
}
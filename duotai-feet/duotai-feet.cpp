// duotai-feet.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:

	CFeet();
	int setCFeet(int f);
	int setinches(int i);
	void display();
	~CFeet();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::setCFeet(int f)
{
	feet = f;
	cout << "���๹�캯��" << feet << "Ӣ��"  << endl;
}int CFeet::setinches(int i)
{
	inches = i;
	cout << inches << "Ӣ��" << endl;
}
void CFeet::display()
{
	cout << "display" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}

class CMyfeet :public CFeet
{
public:
	CMyfeet();
	CMyfeet(int f, int i);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::CMyfeet(int f, int i)
{
	cout << "���������캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CFeet *p;
	/*CMyfeet ai(3, 6);
	ai.display();*/
	p = new CMyfeet;
	p->setCFeet(3);
	p->setinches(6);
	p->display();
	p->~CFeet();
	return 0;
}


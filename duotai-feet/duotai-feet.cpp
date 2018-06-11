// duotai-feet.cpp : 定义控制台应用程序的入口点。
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
	cout << "基类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::setCFeet(int f)
{
	feet = f;
	cout << "基类构造函数" << feet << "英尺"  << endl;
}int CFeet::setinches(int i)
{
	inches = i;
	cout << inches << "英寸" << endl;
}
void CFeet::display()
{
	cout << "display" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::~CFeet()
{
	cout << "基类析构函数" << feet << "英尺" << inches << "英寸" << endl;
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
	cout << "派生类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::CMyfeet(int f, int i)
{
	cout << "派生来构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "派生来析构函数" << feet << "英尺" << inches << "英寸" << endl;
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



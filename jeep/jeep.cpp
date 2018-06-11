// jeep.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inch;
public:
	CFeet();
	void display();
	void setvalue(int fe);
	void setfeet(int in);
	int  getfeet();
	int  getinch();
};
CFeet::CFeet()
{
	feet = 0;
	inch = 0;
}
void CFeet::display()
{
	cout << "基类" << feet << "英尺" << inch << "英寸" << endl;
}
void CFeet::setvalue(int fe)
{
	feet = fe;
}
void CFeet::setfeet(int in)
{
	inch = in % 12;
	feet += in / 12;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinch()
{
	return inch;
}
class Teex :public CFeet
{
public:
	void display();
};
void Teex::display()
{
	cout << "派生类" << feet << "英尺" << inch << "英寸" << endl;
}

int main()
{
	Teex *p;
	p = new Teex;
	p->setvalue(5);
	p->setfeet(6);
	p->display();
	p->CFeet::display();
    return 0;
}


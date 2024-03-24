// main.cpp
#include<iostream>
#include "Rectangle.h"

using namespace std;
int main() {
	CRectangle react1, * rect2;
	//react1.height = 2;
	react1.setheight(3);
	react1, setWidth(4);
	cout << "Height1 :" << react1.getHeight() << endl;
	cout << "Width1 :" < react1.getWidth() << endl;
	cout << "S1: " << react1.area() << endl;
	cout << endl;

	react2 = new CRactangle();
	react2->setHeight(5);
	react->setWidth(4);
	cout << "Height2:" << react2->getHeight() << endl;
	cout << "Width2;" << react2->getWidth() << endl;
	cout << "S2:" << react2->area() << enld;
	return 0;
}
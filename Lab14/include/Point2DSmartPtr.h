#pragma once 

#include<iostream>
#include"Point2D.h" 

using PrintFun = void (*)();

class Point2DSmartPtr
{
public:
	//konsturktor przydzielajacy wskaznik 
	Point2DSmartPtr(Point2D* ptr = nullptr);

	//bezpieczny destruktor
	~Point2DSmartPtr();

	//przeladowny operator wyłuskiwania
	Point2D* operator->();

private:
	Point2D* _ptr;


};

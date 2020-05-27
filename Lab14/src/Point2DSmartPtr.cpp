#include"Point2DSmartPtr.h"  

Point2DSmartPtr::Point2DSmartPtr(Point2D* ptr)
    : _ptr(ptr)
{
}

Point2DSmartPtr::~Point2DSmartPtr()
{
    delete _ptr;
}

Point2D* Point2DSmartPtr::operator->()
{
    return _ptr;
}




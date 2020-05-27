#include"PointAverage.h"  

PointAverage::PointAverage()
    : _sum(Point2D(0,0)), _counter(0)
{
}


void PointAverage::operator()(const Point2D& point)
{
    _sum = _sum + point;
    _counter++;
}

void PointAverage::Print()
{
    _sum = _sum / _counter;

    std::cout<<"Average "<<_sum;
}

void PointAverage::Reset()
{
    _sum = {0., 0.};
    _counter = 0;
}


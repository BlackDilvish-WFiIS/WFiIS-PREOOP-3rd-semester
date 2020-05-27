#include"Box.h"
#include"Volume.h"

Box::Box(double x, double y, double z) 
    : _x(x), _y(y), _z(z)
{
}

Box::Box(std::size_t x, std::size_t y, std::size_t z)
    : _x(static_cast<double>(x)), _y(static_cast<double>(y)), _z(static_cast<double>(z))
{
}

double Box::GetWidth() const
{
    return _x;
}

double Box::GetLength() const
{
    return _y;
}

double Box::GetHeight() const
{
    return _z;
}

std::ostream& operator<<(std::ostream& os, const Box& box)
{
    os<<"Box(length:"<<box.GetWidth()<<", width:"<<box.GetLength()<<", height:"<<box.GetHeight()<<")\n";

    return os;
}

bool smaller(Box* a, Box* b)
{
    Volume volume;

    return volume(*a)<volume(*b) ? true : false;
}


#include"Volume.h"

double Volume::operator()(double x, double y, double z)
{
    return x * y * z;
}

double Volume::operator()(const Box& box)
{
    return box.GetWidth() * box.GetLength() * box.GetHeight();
}


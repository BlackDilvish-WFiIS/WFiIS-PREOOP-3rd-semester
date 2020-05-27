#include"Point2D.h" 

Point2D::Point2D(double x, double y)
    : _x(x), _y(y)
{
}

Point2D Point2D::operator+(const Point2D& point)
{
    return Point2D(_x + point._x, _y + point._y);
}

void Point2D::Print() const
{
    std::cout<<"Point2D:: ("<<_x<<","<<_y<<")\n";
}

Point2D Point2D::operator--()
{
    _x -= 1;
    _y -= 1;

    return *this;
}

Point2D Point2D::operator++(int)
{
    Point2D temp = *this;

    _x += 1;
    _y += 1;

    return temp;
}

Point2D Point2D::operator/(int divider)
{
    _x /= (double) divider;
    _y /= (double) divider;

    return *this;
}

void* Point2D::operator new(std::size_t size)
{
    std::cout<<"Point2D:: alokowanie "<<size<<" bajtow\n";

    return std::malloc(size);
}

void Point2D::operator delete(void* ptr)
{
    std::cout<<"Point2D:: zwalnianie wskaznika\n";

    std::free(ptr);
}

Point2D operator+(double d, const Point2D& point)
{
    return Point2D(d + point._x, point._y);
}

std::ostream& operator<<(std::ostream& os, const Point2D& point)
{
    point.Print();
    return os;
}


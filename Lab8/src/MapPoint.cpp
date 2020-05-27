#include"MapPoint.h"

int MapPoint::_nPoints;

MapPoint::MapPoint()
{
    _nPoints++;
}

MapPoint::MapPoint(std::string id)
{
    SetId(id);
    _nPoints++;
}

MapPoint::MapPoint(std::string id, float latitude, float longitude)
{
    SetId(id);
    _coords.Latitude(latitude);
    _coords.Longitude(longitude);
    _nPoints++;
}

void MapPoint::Print() const
{
    std::cout<<"Point: "<<GetId()<<"("<<_coords.Latitude()<<", "<<_coords.Longitude()<<")\n";
}

void MapPoint::SetId(std::string id)
{
    _id = id;
}

std::string MapPoint::GetId() const
{
    return _id;
}

Coordinates MapPoint::GetCoordinates() const
{
    return _coords;
}

Coordinates& MapPoint::GetCoordinates()
{
    return _coords;
}

int MapPoint::NumberOfPoints()
{
    return _nPoints;
}

//pole = 1/2 * ((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))
double surfaceTriangleArea(const MapPoint p1, const MapPoint p2, const MapPoint p3)
{
    return 0.5 * (
                  (p2.GetCoordinates().Latitude()  - p1.GetCoordinates().Latitude())  *
                  (p3.GetCoordinates().Longitude() - p1.GetCoordinates().Longitude()) -
                  (p3.GetCoordinates().Latitude()  - p1.GetCoordinates().Latitude())  *
                  (p2.GetCoordinates().Longitude() - p1.GetCoordinates().Longitude())
                 );
}


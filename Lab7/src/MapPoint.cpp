#include"MapPoint.h"

MapPoint::MapPoint(std::string name, float lat, float lon)
{
    setName(name);
    setLatitude(lat);
    setLongitude(lon);
}

MapPoint::MapPoint(std::string name)
{
    setName(name);
    setLatitude(0);
    setLongitude(0);
}

MapPoint::MapPoint()
{
    setName("None");
    setLatitude(0);
    setLongitude(0);
}

MapPoint::~MapPoint()
{

}

void MapPoint::Latitude(float lat)
{
    setLatitude(lat);
}

void MapPoint::Longitude(float lon)
{
    setLongitude(lon);
}

void MapPoint::SetId(std::string name)
{
    setName(name);
}

float MapPoint::GetLatitude()
{
    return _latitude;
}

float MapPoint::GetLongitude()
{
    return _longitude;
}

std::string MapPoint::GetName()
{
    return _name;
}

void MapPoint::Coordinates(float lat, float lon)
{
    setLatitude(lat);
    setLongitude(lon);
}

void MapPoint::Print()
{
    std::cout<<"Point: "<<_name<<" ("<<_latitude<<", "<<_longitude<<")\n";
}

MapDistance MapPoint::Distance(MapPoint point)
{
    std::string newName = GetName() + "-" + point.GetName();
    float newLatitude = point.GetLatitude() - GetLatitude();
    float newLongitude = point.GetLongitude() - GetLongitude();

    return MapDistance(newName, newLatitude, newLongitude); 
}

MapPoint MapPoint::Farthest(MapPoint point1, MapPoint point2)
{
    MapDistance mapDist1 = Distance(point1);
    MapDistance mapDist2 = Distance(point2);

    if(mapDist1.GetLength() > mapDist2.GetLength())
        return point1;
    else
        return point2;
}

/// Private interface

void MapPoint::setLatitude(float lat)
{
    _latitude = lat;
}

void MapPoint::setLongitude(float lon)
{
    _longitude = lon;
}

void MapPoint::setName(std::string name)
{
    _name = name;
}

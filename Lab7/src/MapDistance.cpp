#include"MapDistance.h"

MapDistance::MapDistance()
{
    setName("None");
    setLatitudeDiff(0);
    setLongitudeDiff(0);
}

MapDistance::MapDistance(std::string name, float lat, float lon)
{
    setName(name);
    setLatitudeDiff(lat);
    setLongitudeDiff(lon);
}

MapDistance::~MapDistance()
{

}

void MapDistance::Print()
{
    std::cout<<"Distance : "<<_name<<" ("<<_latitudeDiff<<", "<<_longitudeDiff<<")\n";
}

float MapDistance::GetLength()
{
    return sqrt(pow(_latitudeDiff, 2) + pow(_longitudeDiff, 2));
}

void MapDistance::setLatitudeDiff(float lat)
{
    _latitudeDiff = lat;
}

void MapDistance::setLongitudeDiff(float lon)
{
    _longitudeDiff = lon;
}

void MapDistance::setName(std::string name)
{
    _name = name;
}
#include"Coordinates.h"

float Coordinates::Latitude() const
{
    return _latitude;
}

void Coordinates::Latitude(float value)
{
    _latitude = value;
}

float Coordinates::Longitude() const
{
    return _longitude;
}

void Coordinates::Longitude(float value)
{
    _longitude = value;
}

void Coordinates::Set(float latitude, float longitude)
{
    Latitude(latitude);
    Longitude(longitude);
}


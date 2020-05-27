#pragma once

#include<iostream>
#include<string>
#include<cmath>
#include"MapDistance.h"

class MapPoint
{
public:
    MapPoint(std::string name, float lat, float lon);
    MapPoint(std::string name);
    MapPoint();
    ~MapPoint();

    void Latitude(float lat);
    void Longitude(float lon);
    void SetId(std::string name);
    void Coordinates(float lat, float lon);

    float GetLatitude();
    float GetLongitude();
    std::string GetName();

    void Print();

    //Metoda zwracajaca odleglosc, pomiedzy dwoma obiektami klasy
    //MapPoint, reprezentowana przez obiekt klasy MapDistance
    MapDistance Distance(MapPoint point);

    //Metoda zwracajaca jeden z dwoch zadanych punktow, ktory
    //lezy najdalej od obiektu na ktorym metoda jest wywolywana
    MapPoint Farthest(MapPoint point1, MapPoint point2); 

private:
    void setLatitude(float lat);
    void setLongitude(float lon);
    void setName(std::string name);

    float _longitude;
    float _latitude;
    std::string _name;

};
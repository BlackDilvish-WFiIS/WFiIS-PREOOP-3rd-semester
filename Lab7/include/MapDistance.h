#pragma once

#include<iostream>
#include<string>
#include<cmath>

class MapDistance
{
public:
    MapDistance();
    MapDistance(std::string name, float lat, float lon);
    ~MapDistance();

    void Print();
    float GetLength();

private:
    void setLatitudeDiff(float lat);
    void setLongitudeDiff(float lon);
    void setName(std::string name);

    float _longitudeDiff;
    float _latitudeDiff;
    std::string _name;

};
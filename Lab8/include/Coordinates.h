#pragma once

#include<iostream>

class Coordinates
{
public:

	//Konstruktor i destruktor domyslny (trywialny)
	Coordinates() = default;
	~Coordinates() = default;

	//Funkcja zwracajaca wartosc _latitude
	float Latitude() const;
	//Funkcja ustawiajaca wartosc _latitude
	void Latitude(float value);

	//Funkcja zwracajaca wartosc _longitude
	float Longitude() const;
	//Funkcja ustawiajaca wartosc _longitude
	void Longitude(float value);

	//Funkcja ustawiajaca wartosc _latitude i _longitude
	void Set(float latitude, float longitude);

private:
	float _latitude;
	float _longitude;

};

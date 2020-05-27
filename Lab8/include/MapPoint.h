#pragma once

#include<iostream>
#include<string>
#include"Coordinates.h"

class MapPoint
{
public:
	//Konstruktory ustawiajace podane argumenty
	MapPoint();
	MapPoint(std::string id);
	MapPoint(std::string id, float latitude, float longitude);

	//Trywialny destruktor
	~MapPoint() = default;

	//Wypisuje dane zawarte w klasie MapPoint na ekran
	void Print() const;
	//Ustawia wartosc pola _id (nazwe)
	void SetId(std::string id);

	//Zwraca wartosc pola _coords (instancji klasy Coordinates)
	Coordinates GetCoordinates() const;
	//Zwraca referencje do pola _coords (instancji klasy Coordinates)
	Coordinates& GetCoordinates();

	//Zwraca liczbe dotychczasowo utworzonych obiektow klasy MapPoint
	static int NumberOfPoints();

	//Zwraca wartosc pola _id (nazwe)
	std::string GetId() const;

private:

	Coordinates _coords;
	std::string _id;

	static int _nPoints;

};

//Oblicza pole zadane przez współrzedne trzech punktów
double surfaceTriangleArea(const MapPoint p1, const MapPoint p2, const MapPoint p3);

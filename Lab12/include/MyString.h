#pragma once

#include<iostream>
#include<string.h>
#include<stdio.h>

class MyString
{
public:
	/*
	* @param 'const char* s' - Staly lancuch znakow
	* @brief konstruktor kopiujacy staly lancuch do zmiennej _container
	*/
	MyString(const char* s);

	/*
	* @param 'const MyString& s' stala referencja do instancji klasy MyString
	* @brief konstruktor kopiujacy
	*/
	MyString(const MyString& s);

	/*
	* @brief zwalnia pamiec przydzielona do _container
	*/
	~MyString();

	/*
	* @param 'const MyString& s' stala referencja do instancji klasy MyString
	* @brief Porownuje czy napisy sa identyczne
	* @return wartosc logiczna sprawdzenia
	*/
	bool operator==(const MyString& s) const;

	/*
	* @param 'int n' - liczba powtorzen napisu
	* @brief zwraca napis zawarty w _container, zwielokrotniony n-razy
	* @return nowy zwielokrotniony napis
	*/
	MyString operator*(int n) const;

	/*
	* @param 'const MyString& s' stala referencja do instancji klasy MyString
	* @brief operator przypisania
	* @return stala referencja do MyString
	*/
	const MyString& operator=(const MyString& s);

	/*
	* @param 'int i' - pozycja w litery w napisie
	* @brief zwraca znak o podanej pozycji
	* @return znak
	*/
	char& operator[](int i);

	/*
	* @param 'int a, int b' - zakres napisu
	* @brief zwraca podnapis z danego zakresu
	* @return obiekt tymczasowy MyString
	*/
	MyString substr(int a, int b) const;

	/*
	* @brief wypisuje napis
	*/
	void Print() const;



private:
	char* _container;

};

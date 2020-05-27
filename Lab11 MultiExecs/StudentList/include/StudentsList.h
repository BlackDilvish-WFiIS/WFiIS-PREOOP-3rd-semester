#pragma once

#include<iostream>
#include<string>
#include"Student.h"

class StudentsList
{
public:
	//Konstruktor domyslny
	StudentsList();
	//Konstruktor przyjmujacy nazwe listy studentow
	StudentsList(const std::string& name);

	//Destruktor wywoluje metode Clear()
	~StudentsList();

	//Wypisuje nazwe obiektu StudentsList
	void PrintInfo() const;
	//Wypisuje wszystkie dane obiektu StudentsList
	void PrintList() const;
	//Dodaje wskaznik do studenta do tablicy _studentContainer
	void AddStudent(const Student* student);

private:
	//Czysci pamiec z tablicy _studentContainer i danych w niej
	void Clear();

	std::string _name;
	const Student** _studentContainer;
	int _size;
};

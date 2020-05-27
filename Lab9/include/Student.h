#pragma once

#include<iostream>

class Student
{
public:
	//Konstruktor domyslny
	Student();
	//Konstruktor przyjmujacy imiona studenta
	Student(const std::string& fname, const std::string& sname);
	//Destruktor domyslny
	~Student();

	//Wypisuje dane studentow na ekran
	void Print() const;

private:

	std::string _fname;
	std::string _sname;

	int _personalId;
	static int _id;

};

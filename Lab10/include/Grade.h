#pragma once

#include<iostream>
#include<string>

class Grade
{
public:
	Grade(double grade,const std::string& name = "");
	~Grade();

	void Print() const;
	double getMark() const;

	void setName(const std::string& name);
	const std::string& Name() const { return _name; }

private:

	double _grade;
	std::string _name;
	int _privateId;
	

	static int _Id;

};

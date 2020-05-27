#pragma once

#include<iostream>
#include"Grade.h"

class GradeBook
{
public:
	GradeBook();
	GradeBook(const GradeBook& book);
	GradeBook(GradeBook&& book);
	~GradeBook();

	void Insert(Grade* grade,const std::string& name = "No category");
	void Print() const;
	void AddGrade(double mark, const std::string& name = "No category");
	void Summary() const;

	int GetSize() const;

private:

	double Avarage() const;
	double Sum() const;
	void Clear();


	int _size;
	const Grade** _gradesContainer;
	

};

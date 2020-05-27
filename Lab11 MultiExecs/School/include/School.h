#pragma once

#include<iostream>
#include<string>
#include"Grade.h"
#include"GradeBook.h"
#include"Student.h"
#include"StudentsList.h"

class School
{
public:
	School(std::string name, int classes);
	~School();

	void WriteInfo() const;

private:
	GradeBook** _gradeBook;
	StudentsList** _studentsList;

	std::string _schoolName;
	int _numberOfClasses;

};

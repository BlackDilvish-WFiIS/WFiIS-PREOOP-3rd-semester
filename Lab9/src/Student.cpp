#include"Student.h"

Student::Student() : _personalId(++_id)
{}

Student::Student(const std::string& fname, const std::string& sname) : _fname(fname), _sname(sname), _personalId(++_id)
{}

Student::~Student()
{}

void Student::Print() const
{
    std::cout << "Student ID: " << _personalId
              << ", Name: "     << _fname
              << ", Surname: "  << _sname;
}

int Student::_id = 0;


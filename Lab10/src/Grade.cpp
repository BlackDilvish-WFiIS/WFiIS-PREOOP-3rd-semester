#include"Grade.h"

Grade::Grade(double grade,const std::string& name) : _grade(grade), _name(name), _privateId(++Grade::_Id)
{
}

Grade::~Grade()
{
}

void Grade::Print() const
{
    std::cout<<"Grade ID="<<_privateId<<" value="<<_grade;

    if(_name != "")
        std::cout<<" \""<<_name<<"\"\n";
}

double Grade::getMark() const
{
    return _grade;
}

void Grade::setName(const std::string& name)
{
    _name = name;
}

int Grade::_Id = 0;


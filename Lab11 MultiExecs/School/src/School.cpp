#include"School.h"

School::School(std::string name, int classes) 
    : _numberOfClasses(classes), _schoolName(name),
      _studentsList(nullptr), _gradeBook(nullptr)
{
    _studentsList = new StudentsList*[_numberOfClasses];
    _gradeBook = new GradeBook*[_numberOfClasses];
}

School::~School()
{
    delete[] _studentsList;
    delete[] _gradeBook;
}

void School::WriteInfo() const
{
    std::cout<<"Nazwa szkoly: "<<_schoolName<<",\t"
             <<"liczba klas w szkole: "<<_numberOfClasses<<"\n";
}


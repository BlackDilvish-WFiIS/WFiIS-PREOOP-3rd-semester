#include"GradeBook.h"

GradeBook::GradeBook() :_size(0), _gradesContainer(NULL)
{
}

GradeBook::~GradeBook()
{
    Clear();
}

GradeBook::GradeBook(const GradeBook& book) : _size(0), _gradesContainer(NULL)
{
	std::cout<<"Kopiowanie!\n";
	
	for(int i=0; i<book._size; i++)
		AddGrade(book._gradesContainer[i]->getMark(), book._gradesContainer[i]->Name());
}

GradeBook::GradeBook(GradeBook&& book) : _size(book._size), _gradesContainer(book._gradesContainer)
{
		std::cout<<"Przenoszenie!\n";
		book._size = 0;
		book._gradesContainer = nullptr;
}

void GradeBook::Insert(Grade* grade,const std::string& name)
{
    if(_size)
    {
        //Pomocnicza tablica przechowujaca zawartosc _gradesContainer
        const Grade** temp = new const Grade*[_size];

        for(int i=0; i<_size; i++)
            temp[i] = _gradesContainer[i];

        delete[] _gradesContainer;
        _gradesContainer = new const Grade*[_size + 1];

        for(int i=0; i<_size; i++)
            _gradesContainer[i] = temp[i];

        grade->setName(name);
        _gradesContainer[_size] = grade;

        _size++;
        delete[] temp;
    }
    else
    {
        _gradesContainer = new const Grade*[_size + 1];
        grade->setName(name);
        _gradesContainer[_size] = grade;
        _size++;
    }
}

void GradeBook::Print() const
{
    std::cout<<"[GradeBook]: Set of grades in the book:\n";

    for(int i=0; i<_size; i++)
        _gradesContainer[i]->Print();

}

void GradeBook::AddGrade(double mark, const std::string& name)
{
    Insert(new Grade(mark), name);
}

void GradeBook::Summary() const
{
    std::cout<<"[GradeBook]: Summary: Number of grades in the book: "<<_size<<"\n";
    std::cout<<"[GradeBook]: Summary: Average of grades: "<<Avarage()<<"\n";
}

double GradeBook::Avarage() const
{
    return Sum()/_size;
}

double GradeBook::Sum() const
{
    double sum = 0;

    for(int i=0; i<_size; i++)
        sum += _gradesContainer[i]->getMark();

    return sum;
}

void GradeBook::Clear()
{
    if(_size)
        return;

    for(int i=0; i<_size; i++)
        delete _gradesContainer[i];

    delete[] _gradesContainer;
    _size = 0;
}



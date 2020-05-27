#include"StudentsList.h"

StudentsList::StudentsList() : _studentContainer(NULL), _size(0)
{}

StudentsList::StudentsList(const std::string& name) : _name(name), _studentContainer(NULL), _size(0)
{}

StudentsList::~StudentsList()
{
    Clear();
}

void StudentsList::PrintInfo() const
{
    std::cout << "[StudentsList]: " <<_name << "\n";
}

void StudentsList::PrintList() const
{
    PrintInfo();

    for(int i=0; i<_size; i++)
    {
        _studentContainer[i]->Print();
        std::cout<<std::endl;
    }
}

void StudentsList::AddStudent(const Student* student)
{
    if(_size)
    {
        //Pomocnicza tablica przechowujaca zawartosc _studentContainer
        const Student** temp = new const Student*[_size];

        for(int i=0; i<_size; i++)
            temp[i] = _studentContainer[i];

        delete[] _studentContainer;
        _studentContainer = new const Student*[_size + 1];

        for(int i=0; i<_size; i++)
            _studentContainer[i] = temp[i];

        _studentContainer[_size] = student;

        _size++;
        delete[] temp;
    }
    else
    {
        _studentContainer = new const Student*[_size + 1];
        _studentContainer[_size] = student;
        _size++;
    }
}

void StudentsList::Clear()
{
    if(_size)
    {
        for(int i=0; i<_size; i++)
            delete _studentContainer[i];

        delete[] _studentContainer;
    }
}


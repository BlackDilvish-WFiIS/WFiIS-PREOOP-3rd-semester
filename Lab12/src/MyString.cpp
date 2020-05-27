#include"MyString.h"

MyString::MyString(const char* s)
{
    _container = new char[strlen(s) + 1];
    strcpy(_container, s);
}

MyString::MyString(const MyString& s)
{
    _container = new char[strlen(s._container) + 1];
    strcpy(_container, s._container);
}

MyString::~MyString()
{
    delete[] _container;
}

bool MyString::operator==(const MyString& s) const
{
    return strcmp(_container, s._container) == 0;
}

MyString MyString::operator*(int n) const
{
    char* temp = new char[strlen(_container) * n + 1];
    strcpy(temp, _container);
    strcpy(temp + strlen(_container), _container);

    MyString tmp1(temp);
    delete[] temp;
    return tmp1;
}

const MyString& MyString::operator=(const MyString& s)
{
    if(this == &s)
        return *this;

    delete[] _container;
    _container = new char[strlen(s._container) + 1];
    strcpy(_container, s._container);

    return *this;
}

char& MyString::operator[](int i)
{
    return *(_container + i);
}

void MyString::Print() const
{
    printf("%s\n",_container);
}

MyString MyString::substr(int a, int b) const
{
    char* temp = new char[b-a + 2];

    for(int i=0; i<(b-a)+1; i++)
    {
        temp[i] = _container[a+i];
    }
    temp[b-a+1] = '\0';

    MyString tmp1(temp);
    delete[] temp;
    return tmp1;
}


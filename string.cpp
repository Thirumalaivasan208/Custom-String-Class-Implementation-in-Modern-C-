#include "header.h"
MyString::MyString() 
{
    str = new char[1];
    str[0] = '\0';
    length = 0;
}
//**********************************
MyString::MyString(const char* s) 
{
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}
//********************************
MyString::MyString(const MyString& other) 
{
    length = other.length;
    str = new char[length + 1];
    strcpy(str, other.str);
}
//********************************
MyString::~MyString() 
{
    delete[] str;
}
//***********************************
int MyString::size() const 
{
    return length;
}
//***************************************
void MyString::display() const 
{
    std::cout << str << std::endl;
}
//*********************************
MyString& MyString::operator=(const MyString& other) 
{
    if (this != &other) 
    {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    return *this;
}
//*********************************
MyString MyString::operator+(const MyString& other) 
{
    char* temp = new char[length + other.length + 1];
    strcpy(temp, str);
    strcat(temp, other.str);
    MyString result(temp);
    delete[] temp;
    return result;
}
//*******************************
bool MyString::operator==(const MyString& other) 
{
    return strcmp(str, other.str) == 0;
}
//************************************

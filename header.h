#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <cstring>
class MyString 
{
private:
    char* str;
    int length;
public:
    // Constructors
    MyString();
    MyString(const char* s);
    MyString(const MyString& other);
    // Destructor
    ~MyString();
    // Member functions
    int size() const;
    void display() const;
    // Operator overloading
    MyString& operator=(const MyString& other);
    MyString operator+(const MyString& other);
    bool operator==(const MyString& other);
};
#endif


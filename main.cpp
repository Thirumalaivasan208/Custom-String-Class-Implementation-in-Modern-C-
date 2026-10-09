#include "header.h"
int main() 
{
    MyString s1("Hello");
    MyString s2("World");
    MyString s3 = s1 + s2;
    s1.display();
    s2.display();
    s3.display();
    if (s1 == s2) 
    {
        std::cout << "Strings are equal" << std::endl;
    } 
    else 
    {
        std::cout << "Strings are not equal" << std::endl;
    }
    return 0;
}


#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    Student s1(50);
    s1.rollNumber = 50;

    Student *s2 = new Student(5);

    s1.setAge(50);
    cout << s1.getAge() << endl;

    return 0;
}
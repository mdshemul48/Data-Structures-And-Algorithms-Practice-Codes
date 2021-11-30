#include <bits/stdc++.h>

using namespace std;

// object or class amara template hesab a use kori..
// jaita deya amara new new element create korbo..

// amara aikane akta standard template create kore
// then oita deya new new element create korbo..
// copy and fill the data..

// class is blueprint or template

// another name of class is user defined datatype

class Student
{
    // aikane normally variable gula private thake then amara public keyword use kore
    // private variable ka public korbo jate baire thake use kore jai..
    // public is a access modifier
public:
    int rollNumber;
    int age;
};
int main()
{
    // creating object staticly.
    Student s1;
    Student s2;
    Student s4, s5;

    // creating object dynamically
    Student *s6 = new Student;

    s1.age = 24;

    cout << s1.age << endl;

    // this 2 line work in a same way.
    (*s6).age = 50;
    s6->rollNumber = 30;

    return 0;
}
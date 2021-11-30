#include <iostream>
using namespace std;
class Student
{
public:
    int rollNumber;

private:
    int age;

public:
    // =========-> default constractor
    // constractor and class ar name same hobe.
    // no return types
    // no input argument

    // =========-> castom constractor
    Student(int rollNumber)
    {
        // this deya amara ai object ar value access korte parbo.
        // jodi same variable name amara use kori tahole aita deya object ar variable access kora jai.
        this->rollNumber = rollNumber;
    }

    void display()
    {
        cout << age << " " << rollNumber << endl;
    }
    // getter function
    int getAge()
    {
        return age;
    }
    // setter function
    void setAge(int ageValue)
    {
        age = ageValue;
    }

    // jokhon amadar object ar scope sas hobe tokhon amadar distructor call hobe.
    ~Student()
    {
        cout << "distructor called" << endl;
    }
};
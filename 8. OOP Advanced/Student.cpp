#include <iostream>
#include <cstring>
using namespace std;

// shallow copy

// aikane amara 1 variable deya 2 ta object create korci..
// akhon aikane amara jodi akta variable ar value change kore dy
// tahole 2 ta object ar e value change hoya jai..
// aitaka bola hoy shallow copy..
// aitar mane aita just address ta copy korba..

// deep copy

// deep copy holo variable ar akta new array create kore oitai copy kore ny..
// link kore rakhe na..
// and refer o kore na origin variable ka..

class Student
{
    const int age;
    char *name;

public:
    Student(Student &s)
    {
        // this->age = s.age;
        // this->name = name; // shallow copy
        this->name = new char[strlen(s.name) + 1];

        strcpy(this->name, s.name);
    }

    Student(int age, char *name) : age(age) // initialize list
    {
        // this->age = age;
        this->name = new char[strlen(name) + 1];
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(30, name);
    s2.display();

    s1.display();
    return 0;
}
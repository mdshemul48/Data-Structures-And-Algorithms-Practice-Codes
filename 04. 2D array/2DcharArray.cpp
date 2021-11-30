#include <iostream>

using namespace std;

int main()
{
    char numbers[][10] = {"one",
                          "two",
                          "three",
                          "forty",
                          "eight",
                          "eight"};

    for (int i = 0; i < 6; i++)
    {

        cout << numbers[i] << endl;
        //              ^----- aita holo akta address just.. kono string na..
         

    }

    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string temp;
    vector<char> checked;
    for (int i = 0; i < input.size(); i++)
    {
        int counter = 0;
        char element = input[i];
        bool checkedStatus = false;

        for (char checkedElement : checked)
        {
            if (element == checkedElement)
            {
                checkedStatus = true;

                break;
            }
        }
        if (checkedStatus)
        {
            continue;
        }

        for (int j = 0; j < input.size(); j++)
        {
            if (input[j] == element and !checkedStatus)
            {

                counter++;
            }
        }
        checked.push_back(element);

        if (counter == 1)
        {
            cout << element;
        }
        else
        {
            cout << element << counter;
        }
    }
    cout << endl;

    return 0;
}
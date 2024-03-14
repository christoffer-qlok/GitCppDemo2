#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hi", "World"};

    for (const string& word : msg)
    {
        cout << word << "   ";
    }
    cout << endl;
}

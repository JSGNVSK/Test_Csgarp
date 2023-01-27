#include <iostream>
#include <fstream>
#include "json.hpp"

using namespace std;

using json = nlohmann::json;

int main()
{
    ifstream file("test.json");

    json jsonData;

    file >> jsonData;

    cout << jsonData["Patiesuma"] << endl;
    cout << jsonData["saraksts1"] << endl;
    cout <<endl;
    cout << jsonData["ObjSaraksts"]<< endl;
    cout <<endl;

    cout << "Individualas objekta vertibas!!" << endl;

    for(auto &array : jsonData["ObjSaraksts"])
    {
        cout << array["Vertibas1"] << endl;
        cout << array["Vertibas2"] << endl;
    }
    cout <<endl;
    cout << "Individualas saraksta vertibas!!" << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << jsonData["saraksts1"][i] << endl;
    }
    cout << jsonData["saraksts1"][2] << endl;
    cout <<endl;
    cout <<endl;

    for(auto &elemts : jsonData["saraksts1"].items())
    {
        cout << elemts.value() << endl;
    }

    return 0;
}

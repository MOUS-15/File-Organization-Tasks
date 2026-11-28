#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main ()
{
    vector<string> names;
    fstream file;
    file.open("name.txt",ios::in);
    string name;
    while(getline(file,name))
    {
        names.push_back(name);
    }
    file.close();
    file.open("name.txt",ios::trunc | ios::out);
    sort(names.begin(),names.end());
    while (!names.empty())
    {
        file<<names.front()<<endl;
        names.erase(names.begin());
    }
    file.close();
    cout<<"the task compelet succesfully"<<endl;
    return 0;

}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    file.open("students.txt",ios::out |ios::in);
    string name;
    int id;
    float grade;
    char ask='y',delim='$';
    while (ask=='y')
    {
        cout<<"enter the full name "<<endl;
        getline(cin,name);
        cout<<"enter the ID "<<endl;
        cin>>id;
        cout<<"enter the grade "<<endl;
        cin>>grade;
        file<<name<<","<<id<<","<<grade<<delim<<endl;
        cout<<"Do you want to enter another record (y or n )"<<endl;
        cin>>ask;
        if(!(ask=='y' || ask=='n')) 
        {
            cout<<"you have entered an incorrect character "<<endl;
            return 0 ;}
    }
    
    file.close();
    return 0;
}
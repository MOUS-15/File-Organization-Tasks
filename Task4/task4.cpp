#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// create struct to store person data 
struct persons
{
    int person_age;
   string person_name;
};

int main()
{
    fstream file;
    file.open("persons_data.txt",ios::out);
   int num_user;
   cout<<"How many persond you want enter to the file "<<endl;
   cin>>num_user;
   string name;
   int age;
   file <<"Name"<<"     "<<"Age"<<endl;
   for(int x=1;x<=num_user;x++)
   {
        cout<<"enter the user name of number "<< x<<endl;
        cin>>name;
        cout<<"enter the user age of number "<< x<<endl;
        cin>>age;
        file<<name <<"  "<<age<<endl;

   }
   file.close();
   file.open("persons_data.txt",ios::in);
   string header;
   getline(file, header); // Skip the header line

   // use persons struct
   persons person;
   vector <persons> person_data;
   // load data from file to vector
    while (file >> person.person_name >> person.person_age)
    {
    person_data.push_back(person);
    }
   if (!person_data.empty())
   {
    


    // find younger and older person 
    int min_index = 0;
    int max_index = 0;

for (int i = 1; i < person_data.size(); i++)
   {
    // find min_index
    if (person_data[i].person_age < person_data[min_index].person_age)
        min_index = i;
    
    // find max_index
        if (person_data[i].person_age > person_data[max_index].person_age)
        max_index = i;
    }
    cout<<"============================================"<<endl;
    //print data of youngest person
    cout << "The youngest person is: "
     << person_data.at(min_index).person_name << endl;

    cout << "Age: "
     << person_data.at(min_index).person_age << endl;
     
    cout<<"============================================"<<endl;

    //print data of oldest person

    cout << "The oldest person is: "
     << person_data[max_index].person_name << endl;

    cout << "Age: "
     << person_data[max_index].person_age << endl;
    cout<<"============================================"<<endl;

   file.close();
    // save result to the same file 
   file.open("persons_data.txt",ios::app);
   file<<endl;
   file<<"data of older and younger persons "<<endl;
   file<<person_data.at(min_index).person_name
   <<"     "<<person_data.at(min_index).person_age<<endl;
   file<<person_data.at(max_index).person_name
   <<"     "<<person_data.at(max_index).person_age<<endl;
    }
    else
    {
    cout << "No persons found!" << endl;
    } 
   
    return 0;
}

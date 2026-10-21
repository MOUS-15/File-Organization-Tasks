#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
     fstream file;
     file.open("welcome.txt",ios::out);
     file<<"Hello Everybody"<<endl;
     file.close();

     // open the file for reading and writing 

     /* file.open("welcome.txt",ios::in|ios::out);
     string text;
     getline(file,text);
     size_t pos=text.find("body");
     if (pos !=string ::npos)
      {
        text.replace(pos,4,"one");
      }
    file.clear();
    file.seekp(0,ios::beg);
    file<<text<<endl;
    file.close();  */

    // another way to solution
    file.open("welcome.txt",ios::in|ios::out);
    file.seekp(11);
    file<<"one "<<endl;
    return 0;
}
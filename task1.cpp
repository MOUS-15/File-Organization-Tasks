#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
string full_name;
  float grade;
  int ID;
  cout << "Enter your full name: ";
  getline(cin, full_name);
  cout << "Enter your grade: ";
  cin >> grade;
  cout << "Enter your ID: ";
  cin >> ID;
  fstream file;
  file.open("student.txt", ios::out);
  if (file.is_open()) {
    file << "Full Name: " << full_name << endl;
    file << "Grade: " << grade << endl;
    file << "ID: " << ID << endl;
    cout << "Data written to file successfully." << endl;
    file.close();
    }
   else {
    cout << "Unable to open file" << endl;
       }
       return 0;
    }

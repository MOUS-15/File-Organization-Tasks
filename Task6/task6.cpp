#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    fstream file, temp;

    file.open("grades.txt", ios::in);
    temp.open("temp_grades.txt", ios::out);

    // Check opening
    if (!file.good() || !temp.good())
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    int grade;

    while (file >> grade)
    {
        cout << grade << endl;
    }

    // Check reading errors
    if (file.bad())
    {
        cout << "Serious reading error!" << endl;
        return 1;
    }

    if (!file.eof())
    {
        cout << "Reading failed!" << endl;
        return 1;
    }

    file.clear();
    file.seekg(0, ios::beg);

    bool found = false;
    int temp_grade;

    cout << "Enter the grade you want to remove: ";
    cin >> temp_grade;

    while (file >> grade)
    {
        if (temp_grade != grade || found)
        {
            temp << grade << endl;
        }
        else
        {
            found = true;
        }
    }

    // Check writing
    if (!temp.good())
    {
        cout << "Writing failed!" << endl;
        file.close();
        temp.close();
        remove("temp_grades.txt");
        return 1;
    }

    temp.close();
    file.close();

    if (found)
    {
        if (remove("grades.txt") == 0 &&
            rename("temp_grades.txt", "grades.txt") == 0)
        {
            cout << "Grade deleted successfully!" << endl;
        }
        else
        {
            cout << "Error replacing file!" << endl;
        }
    }
    else
    {
        remove("temp_grades.txt");
        cout << "Grade not found!" << endl;
    }

    return 0;
}
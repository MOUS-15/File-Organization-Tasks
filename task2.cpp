#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{  // create a file and write some data to it
   fstream file;
   file.open("fruits.txt",ios::out);
   if(file.is_open())
   {     //Apple orange banana

        file<<"Apple"<<endl;
        file<<"Orange"<<endl;
        file<<"Banana"<<endl;
        file.close();
        
   }
   // read data from the file and store it in an array
    string fruit[3];
    file.open("fruits.txt",ios::in);
    if(file.is_open())
    {
        for(int i=0;i<file.end +1;i++)
        {
            getline(file,fruit[i]);
        }
        file.close();
    }

    // print the contents of array
    cout<<"the content of file are"<<endl;
    for (int x=0;x<3;x++)
    { 
        cout<<fruit[x]<<endl;
    }
    //add some more data to the end of the file
    file.open("fruits.txt",ios::app);
    file<<"fresh fruits"<<endl;
    file.close(); 
    cout<<"task completed successfully"<<endl; 
  return 0;
}
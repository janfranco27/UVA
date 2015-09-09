#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int i = 0;

int main()
{
    string line;
    //ifstream myfile;
    //myfile.open("in.txt");

    //while(getline(myfile,line))

    while(getline(cin,line))
    {
        for (int j = 0; j < line.size(); j++)
            if (line[j] == '"')
            {
                i%2 == 0 ? line.replace(j,1,"``") : line.replace(j,1,"''");
                i++;
            }
        cout<<line<<endl;
    }
    return 0;
}


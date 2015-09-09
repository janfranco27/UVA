#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;

typedef map <string, int> myMap;
int main()
{
    int N;
    cin>>N;
    myMap conquests;
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        string line;
        getline(cin,line);
        istringstream istream(line);
        string country;
        istream >> country;
        conquests[country]++;
    }


    for (myMap::iterator it=conquests.begin(); it!=conquests.end(); ++it)
        cout << it->first << " " << it->second << endl;


    return 0;
}


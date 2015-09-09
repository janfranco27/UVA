#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    for(int i = 0; i < T; i++)
    {
        int maxSpeed = 0;
        cin>>N;
        for(int j = 0; j < N; j++)
        {
            int speed;
            cin>>speed;
            if(speed > maxSpeed)
                maxSpeed = speed;
        }
        cout<<"Case " << (i+1) <<": "<<maxSpeed<<endl;
    }

    return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;

int minBed = 0;
int INF = 1<<30;
int main()
{
    int N,B,H,W;
    while(cin>>N>>B>>H>>W)
    {
        int bestHotel = INF;
        for (int i = 0; i < H ; i++)
        {
            int total = 0;

            int price, rooms, availableBeds = minBed;
            cin>> price;
            for(int j = 0; j < W; j++)
            {
                cin>>rooms;
                if(rooms > availableBeds)
                    availableBeds = rooms;

            }

            if(availableBeds >= N)
                total += N*price;
            else
                total = -1;

            if(total != -1 && total < bestHotel)
                bestHotel = total;
        }
        if(bestHotel != INF && bestHotel != -1 && bestHotel <= B)
            cout << bestHotel << endl;
        else
            cout << "stay home"<<endl;

    }

    return 0;
}


#include <map>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>

// Important: If the key is a pair, you cannot use unordered_map because the template is not available.

class UndergroundSystem {
public:
    
    // This below can be unordered map
    unordered_map<int, pair<string, int>> cIn; // id , (stationIn, time)

    // This below cannot be unordered map
    map<pair<string,string>, pair<int, double>> table; // (stationIn, stationOut) , (instances, totalTime)
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        cIn[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        int dt = t- cIn[id].second;
        auto p = make_pair(cIn[id].first, stationName);
        auto itr = table.find(p);
        if(itr != table.end())
            itr->second = make_pair(itr->second.first + 1, itr->second.second + dt);
        else
            table[p] = make_pair(1, dt);
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto p = make_pair(startStation, endStation);
        auto itr = table.find(p);
        return (double)itr->second.second/itr->second.first;
    }
};
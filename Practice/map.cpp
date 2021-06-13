
#include <map>
#include <iostream>

using namespace std;

// to search in map
// auto itr = table.find(make_pair(startStation, endStation));
// if(itr != table.end())
//     return itr->second;
// else return null;

int main()
{
    map <string, int, less<>> M; // add greater to change sort order; default is less
    M["cat"] = 1;
    M["dog"] = 2;
    M.insert(make_pair("elephant", 4));

    for(auto &elm: M)
        cout<<elm.first <<"\t" << elm.second <<"\n";

    return 0;
}

#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

// to search in map
// auto itr = table.find(make_pair(startStation, endStation));
// if(itr != table.end())
//     return itr->second;
// else return null;

int main()
{
    // ORDERED O(log n)
    map <string, int, less<>> M; // add greater to change sort order; default is less
    M["cat"] = 1;
    M["dog"] = 2;
    // this will overwrite the previous key. To not overwrite, check if already exists
    M["dog"] = 3; 
    M.insert(make_pair("elephant", 4));

    for(auto &elm: M)
        cout<<elm.first <<"\t" << elm.second <<"\n";
    cout <<"\n";
    
    // UNORDERED O(1)
    unordered_map<string, int> N; 
    N["cat"] = 1;
    N["dog"] = 2;
    // this will overwrite the previous key. To not overwrite, check if already exists
    N["dog"] = 3;
    N.insert(make_pair("elephant", 4));

    for(auto &elm: N)
        cout<<elm.first <<"\t" << elm.second <<"\n";

    // SEARCH is the same for ordered and unordered.
    if(N.find("cat") != N.end())
        cout<<M["cat"];
    if(N.count("cat") > 0)
        cout<<N["cat"] << "\n";
    
    return 0;
}